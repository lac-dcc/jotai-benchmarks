def has_rec_params(descriptor):
    rec_structs = []
    func_rec_params = []
    func_params = []

    for line in descriptor.split('\n'):
        if 'function' in line and 'struct' in line:
            func_params = line.split('|')[1:]
            func_params = [x.strip() for x in func_params if 'struct' in x and '*' in x and '**' not in x]

        elif 'struct' in line:
            count_rec_struct_members = 0
            struct_params = line.split('|')
            struct_params = [x.strip() for x in struct_params]
            name = struct_params[0]
            for i in struct_params[1:]:
                if '*' in i and name in i and '**' not in i:
                    count_rec_struct_members += 1
            if(count_rec_struct_members):
                rec_structs += [(name,count_rec_struct_members)]

    for param in func_params:
        param_type = param.split(None, 1)[1]
        param_type = param_type.replace('*', "").strip()

        for rec_struct,count_rec_struct_members in rec_structs:
            if rec_struct == param_type:
                func_rec_params += [(param, count_rec_struct_members)]

    return func_rec_params


def _getRecursiveConstraints(func_rec_params, contraintType) -> str:

        const_string = ""

        for rec_param, count_rec_struct_members in func_rec_params:
            # print(count_rec_struct_members)
            if(contraintType == "linked"):
                const_string += 'linked(' + rec_param.split(' ')[0] + ', 10000) ,'
            elif(contraintType == 'dlinked' and count_rec_struct_members == 2):
                const_string += 'dlinked(' + rec_param.split(' ')[0] + ', 10000) ,'
            elif(contraintType == 'bintree' and count_rec_struct_members == 2):
                const_string += 'btree(' + rec_param.split(' ')[0] + ', 10) ,'
        
        if const_string:
            return const_string[:-2]
        return const_string
