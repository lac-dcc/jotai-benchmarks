// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            big-arr-10x\n\
       1            empty\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
struct gl_api_table {int /*<<< orphan*/  Viewport; int /*<<< orphan*/  VertexPointer; int /*<<< orphan*/  Vertex3fv; int /*<<< orphan*/  Vertex4f; int /*<<< orphan*/  Vertex3f; int /*<<< orphan*/  Vertex2f; int /*<<< orphan*/  Translatef; int /*<<< orphan*/  TexParameterfv; int /*<<< orphan*/  TexSubImage2D; int /*<<< orphan*/  TexSubImage1D; int /*<<< orphan*/  TexImage2D; int /*<<< orphan*/  TexImage1D; int /*<<< orphan*/  TexGenfv; int /*<<< orphan*/  TexEnvfv; int /*<<< orphan*/  TexCoordPointer; int /*<<< orphan*/  TexCoord4f; int /*<<< orphan*/  TexCoord2f; int /*<<< orphan*/  StencilOp; int /*<<< orphan*/  StencilMask; int /*<<< orphan*/  StencilFunc; int /*<<< orphan*/  ShadeModel; int /*<<< orphan*/  SelectBuffer; int /*<<< orphan*/  Scissor; int /*<<< orphan*/  Scalef; int /*<<< orphan*/  Rotatef; int /*<<< orphan*/  RenderMode; int /*<<< orphan*/  Rectf; int /*<<< orphan*/  ReadPixels; int /*<<< orphan*/  ReadBuffer; int /*<<< orphan*/  RasterPos4f; int /*<<< orphan*/  PushName; int /*<<< orphan*/  PushMatrix; int /*<<< orphan*/  PushClientAttrib; int /*<<< orphan*/  PushAttrib; int /*<<< orphan*/  PrioritizeTextures; int /*<<< orphan*/  PopName; int /*<<< orphan*/  PopMatrix; int /*<<< orphan*/  PopClientAttrib; int /*<<< orphan*/  PopAttrib; int /*<<< orphan*/  PolygonStipple; int /*<<< orphan*/  PolygonOffset; int /*<<< orphan*/  PolygonMode; int /*<<< orphan*/  PointSize; int /*<<< orphan*/  PixelZoom; int /*<<< orphan*/  PixelTransferf; int /*<<< orphan*/  PixelStorei; int /*<<< orphan*/  PixelMapfv; int /*<<< orphan*/  PassThrough; int /*<<< orphan*/  Ortho; int /*<<< orphan*/  Normal3fv; int /*<<< orphan*/  NormalPointer; int /*<<< orphan*/  Normal3f; int /*<<< orphan*/  NewList; int /*<<< orphan*/  MultMatrixf; int /*<<< orphan*/  MatrixMode; int /*<<< orphan*/  Materialfv; int /*<<< orphan*/  MapGrid2f; int /*<<< orphan*/  MapGrid1f; int /*<<< orphan*/  Map2f; int /*<<< orphan*/  Map1f; int /*<<< orphan*/  LogicOp; int /*<<< orphan*/  LoadName; int /*<<< orphan*/  LoadMatrixf; int /*<<< orphan*/  LoadIdentity; int /*<<< orphan*/  ListBase; int /*<<< orphan*/  LineWidth; int /*<<< orphan*/  LineStipple; int /*<<< orphan*/  Lightfv; int /*<<< orphan*/  LightModelfv; int /*<<< orphan*/  IsTexture; int /*<<< orphan*/  IsList; int /*<<< orphan*/  IsEnabled; int /*<<< orphan*/  InterleavedArrays; int /*<<< orphan*/  InitNames; int /*<<< orphan*/  IndexPointer; int /*<<< orphan*/  IndexMask; int /*<<< orphan*/  Indexi; int /*<<< orphan*/  Indexf; int /*<<< orphan*/  Hint; int /*<<< orphan*/  GetTexParameteriv; int /*<<< orphan*/  GetTexParameterfv; int /*<<< orphan*/  GetTexLevelParameteriv; int /*<<< orphan*/  GetTexLevelParameterfv; int /*<<< orphan*/  GetTexImage; int /*<<< orphan*/  GetTexGeniv; int /*<<< orphan*/  GetTexGenfv; int /*<<< orphan*/  GetTexGendv; int /*<<< orphan*/  GetTexEnviv; int /*<<< orphan*/  GetTexEnvfv; int /*<<< orphan*/  GetString; int /*<<< orphan*/  GetPolygonStipple; int /*<<< orphan*/  GetPixelMapusv; int /*<<< orphan*/  GetPixelMapuiv; int /*<<< orphan*/  GetPixelMapfv; int /*<<< orphan*/  GetMaterialiv; int /*<<< orphan*/  GetMaterialfv; int /*<<< orphan*/  GetMapiv; int /*<<< orphan*/  GetMapfv; int /*<<< orphan*/  GetMapdv; int /*<<< orphan*/  GetLightiv; int /*<<< orphan*/  GetLightfv; int /*<<< orphan*/  GetPointerv; int /*<<< orphan*/  GetIntegerv; int /*<<< orphan*/  GetFloatv; int /*<<< orphan*/  GetError; int /*<<< orphan*/  GetDoublev; int /*<<< orphan*/  GetColorTableParameteriv; int /*<<< orphan*/  GetColorTable; int /*<<< orphan*/  GetClipPlane; int /*<<< orphan*/  GetBooleanv; int /*<<< orphan*/  GenTextures; int /*<<< orphan*/  GenLists; int /*<<< orphan*/  Frustum; int /*<<< orphan*/  FrontFace; int /*<<< orphan*/  Fogfv; int /*<<< orphan*/  Flush; int /*<<< orphan*/  Finish; int /*<<< orphan*/  FeedbackBuffer; int /*<<< orphan*/  EvalPoint2; int /*<<< orphan*/  EvalPoint1; int /*<<< orphan*/  EvalMesh2; int /*<<< orphan*/  EvalMesh1; int /*<<< orphan*/  EvalCoord2f; int /*<<< orphan*/  EvalCoord1f; int /*<<< orphan*/  EndList; int /*<<< orphan*/  End; int /*<<< orphan*/  EnableClientState; int /*<<< orphan*/  Enable; int /*<<< orphan*/  EdgeFlagPointer; int /*<<< orphan*/  EdgeFlag; int /*<<< orphan*/  DrawPixels; int /*<<< orphan*/  DrawElements; int /*<<< orphan*/  DrawBuffer; int /*<<< orphan*/  DrawArrays; int /*<<< orphan*/  DisableClientState; int /*<<< orphan*/  Disable; int /*<<< orphan*/  DepthRange; int /*<<< orphan*/  DepthMask; int /*<<< orphan*/  DepthFunc; int /*<<< orphan*/  DeleteTextures; int /*<<< orphan*/  DeleteLists; int /*<<< orphan*/  CullFace; int /*<<< orphan*/  CopyTexSubImage2D; int /*<<< orphan*/  CopyTexSubImage1D; int /*<<< orphan*/  CopyTexImage2D; int /*<<< orphan*/  CopyTexImage1D; int /*<<< orphan*/  CopyPixels; int /*<<< orphan*/  ColorSubTable; int /*<<< orphan*/  ColorTable; int /*<<< orphan*/  ColorPointer; int /*<<< orphan*/  ColorMaterial; int /*<<< orphan*/  ColorMask; int /*<<< orphan*/  Color4ubv; int /*<<< orphan*/  Color4ub; int /*<<< orphan*/  Color4fv; int /*<<< orphan*/  Color4f; int /*<<< orphan*/  Color3fv; int /*<<< orphan*/  Color3f; int /*<<< orphan*/  ClipPlane; int /*<<< orphan*/  ClearStencil; int /*<<< orphan*/  ClearIndex; int /*<<< orphan*/  ClearDepth; int /*<<< orphan*/  ClearColor; int /*<<< orphan*/  ClearAccum; int /*<<< orphan*/  Clear; int /*<<< orphan*/  CallLists; int /*<<< orphan*/  CallList; int /*<<< orphan*/  BlendFunc; int /*<<< orphan*/  Bitmap; int /*<<< orphan*/  BindTexture; int /*<<< orphan*/  Begin; int /*<<< orphan*/  ArrayElement; int /*<<< orphan*/  AreTexturesResident; int /*<<< orphan*/  AlphaFunc; int /*<<< orphan*/  Accum; } ;

/* Variables and functions */
 int /*<<< orphan*/  gl_Accum ; 
 int /*<<< orphan*/  gl_AlphaFunc ; 
 int /*<<< orphan*/  gl_AreTexturesResident ; 
 int /*<<< orphan*/  gl_ArrayElement ; 
 int /*<<< orphan*/  gl_Begin ; 
 int /*<<< orphan*/  gl_BindTexture ; 
 int /*<<< orphan*/  gl_Bitmap ; 
 int /*<<< orphan*/  gl_BlendFunc ; 
 int /*<<< orphan*/  gl_CallList ; 
 int /*<<< orphan*/  gl_CallLists ; 
 int /*<<< orphan*/  gl_Clear ; 
 int /*<<< orphan*/  gl_ClearAccum ; 
 int /*<<< orphan*/  gl_ClearColor ; 
 int /*<<< orphan*/  gl_ClearDepth ; 
 int /*<<< orphan*/  gl_ClearIndex ; 
 int /*<<< orphan*/  gl_ClearStencil ; 
 int /*<<< orphan*/  gl_ClipPlane ; 
 int /*<<< orphan*/  gl_Color3f ; 
 int /*<<< orphan*/  gl_Color3fv ; 
 int /*<<< orphan*/  gl_Color4f ; 
 int /*<<< orphan*/  gl_Color4fv ; 
 int /*<<< orphan*/  gl_Color4ub ; 
 int /*<<< orphan*/  gl_Color4ubv ; 
 int /*<<< orphan*/  gl_ColorMask ; 
 int /*<<< orphan*/  gl_ColorMaterial ; 
 int /*<<< orphan*/  gl_ColorPointer ; 
 int /*<<< orphan*/  gl_ColorSubTable ; 
 int /*<<< orphan*/  gl_ColorTable ; 
 int /*<<< orphan*/  gl_CopyPixels ; 
 int /*<<< orphan*/  gl_CopyTexImage1D ; 
 int /*<<< orphan*/  gl_CopyTexImage2D ; 
 int /*<<< orphan*/  gl_CopyTexSubImage1D ; 
 int /*<<< orphan*/  gl_CopyTexSubImage2D ; 
 int /*<<< orphan*/  gl_CullFace ; 
 int /*<<< orphan*/  gl_DeleteLists ; 
 int /*<<< orphan*/  gl_DeleteTextures ; 
 int /*<<< orphan*/  gl_DepthFunc ; 
 int /*<<< orphan*/  gl_DepthMask ; 
 int /*<<< orphan*/  gl_DepthRange ; 
 int /*<<< orphan*/  gl_Disable ; 
 int /*<<< orphan*/  gl_DisableClientState ; 
 int /*<<< orphan*/  gl_DrawArrays ; 
 int /*<<< orphan*/  gl_DrawBuffer ; 
 int /*<<< orphan*/  gl_DrawElements ; 
 int /*<<< orphan*/  gl_DrawPixels ; 
 int /*<<< orphan*/  gl_EdgeFlag ; 
 int /*<<< orphan*/  gl_EdgeFlagPointer ; 
 int /*<<< orphan*/  gl_Enable ; 
 int /*<<< orphan*/  gl_EnableClientState ; 
 int /*<<< orphan*/  gl_End ; 
 int /*<<< orphan*/  gl_EndList ; 
 int /*<<< orphan*/  gl_EvalCoord1f ; 
 int /*<<< orphan*/  gl_EvalCoord2f ; 
 int /*<<< orphan*/  gl_EvalMesh1 ; 
 int /*<<< orphan*/  gl_EvalMesh2 ; 
 int /*<<< orphan*/  gl_EvalPoint1 ; 
 int /*<<< orphan*/  gl_EvalPoint2 ; 
 int /*<<< orphan*/  gl_FeedbackBuffer ; 
 int /*<<< orphan*/  gl_Finish ; 
 int /*<<< orphan*/  gl_Flush ; 
 int /*<<< orphan*/  gl_Fogfv ; 
 int /*<<< orphan*/  gl_FrontFace ; 
 int /*<<< orphan*/  gl_Frustum ; 
 int /*<<< orphan*/  gl_GenLists ; 
 int /*<<< orphan*/  gl_GenTextures ; 
 int /*<<< orphan*/  gl_GetBooleanv ; 
 int /*<<< orphan*/  gl_GetClipPlane ; 
 int /*<<< orphan*/  gl_GetColorTable ; 
 int /*<<< orphan*/  gl_GetColorTableParameteriv ; 
 int /*<<< orphan*/  gl_GetDoublev ; 
 int /*<<< orphan*/  gl_GetError ; 
 int /*<<< orphan*/  gl_GetFloatv ; 
 int /*<<< orphan*/  gl_GetIntegerv ; 
 int /*<<< orphan*/  gl_GetLightfv ; 
 int /*<<< orphan*/  gl_GetLightiv ; 
 int /*<<< orphan*/  gl_GetMapdv ; 
 int /*<<< orphan*/  gl_GetMapfv ; 
 int /*<<< orphan*/  gl_GetMapiv ; 
 int /*<<< orphan*/  gl_GetMaterialfv ; 
 int /*<<< orphan*/  gl_GetMaterialiv ; 
 int /*<<< orphan*/  gl_GetPixelMapfv ; 
 int /*<<< orphan*/  gl_GetPixelMapuiv ; 
 int /*<<< orphan*/  gl_GetPixelMapusv ; 
 int /*<<< orphan*/  gl_GetPointerv ; 
 int /*<<< orphan*/  gl_GetPolygonStipple ; 
 int /*<<< orphan*/  gl_GetString ; 
 int /*<<< orphan*/  gl_GetTexEnvfv ; 
 int /*<<< orphan*/  gl_GetTexEnviv ; 
 int /*<<< orphan*/  gl_GetTexGendv ; 
 int /*<<< orphan*/  gl_GetTexGenfv ; 
 int /*<<< orphan*/  gl_GetTexGeniv ; 
 int /*<<< orphan*/  gl_GetTexImage ; 
 int /*<<< orphan*/  gl_GetTexLevelParameterfv ; 
 int /*<<< orphan*/  gl_GetTexLevelParameteriv ; 
 int /*<<< orphan*/  gl_GetTexParameterfv ; 
 int /*<<< orphan*/  gl_GetTexParameteriv ; 
 int /*<<< orphan*/  gl_Hint ; 
 int /*<<< orphan*/  gl_IndexMask ; 
 int /*<<< orphan*/  gl_IndexPointer ; 
 int /*<<< orphan*/  gl_Indexf ; 
 int /*<<< orphan*/  gl_Indexi ; 
 int /*<<< orphan*/  gl_InitNames ; 
 int /*<<< orphan*/  gl_InterleavedArrays ; 
 int /*<<< orphan*/  gl_IsEnabled ; 
 int /*<<< orphan*/  gl_IsList ; 
 int /*<<< orphan*/  gl_IsTexture ; 
 int /*<<< orphan*/  gl_LightModelfv ; 
 int /*<<< orphan*/  gl_Lightfv ; 
 int /*<<< orphan*/  gl_LineStipple ; 
 int /*<<< orphan*/  gl_LineWidth ; 
 int /*<<< orphan*/  gl_ListBase ; 
 int /*<<< orphan*/  gl_LoadIdentity ; 
 int /*<<< orphan*/  gl_LoadMatrixf ; 
 int /*<<< orphan*/  gl_LoadName ; 
 int /*<<< orphan*/  gl_LogicOp ; 
 int /*<<< orphan*/  gl_Map1f ; 
 int /*<<< orphan*/  gl_Map2f ; 
 int /*<<< orphan*/  gl_MapGrid1f ; 
 int /*<<< orphan*/  gl_MapGrid2f ; 
 int /*<<< orphan*/  gl_Materialfv ; 
 int /*<<< orphan*/  gl_MatrixMode ; 
 int /*<<< orphan*/  gl_MultMatrixf ; 
 int /*<<< orphan*/  gl_NewList ; 
 int /*<<< orphan*/  gl_Normal3f ; 
 int /*<<< orphan*/  gl_Normal3fv ; 
 int /*<<< orphan*/  gl_NormalPointer ; 
 int /*<<< orphan*/  gl_Ortho ; 
 int /*<<< orphan*/  gl_PassThrough ; 
 int /*<<< orphan*/  gl_PixelMapfv ; 
 int /*<<< orphan*/  gl_PixelStorei ; 
 int /*<<< orphan*/  gl_PixelTransferf ; 
 int /*<<< orphan*/  gl_PixelZoom ; 
 int /*<<< orphan*/  gl_PointSize ; 
 int /*<<< orphan*/  gl_PolygonMode ; 
 int /*<<< orphan*/  gl_PolygonOffset ; 
 int /*<<< orphan*/  gl_PolygonStipple ; 
 int /*<<< orphan*/  gl_PopAttrib ; 
 int /*<<< orphan*/  gl_PopClientAttrib ; 
 int /*<<< orphan*/  gl_PopMatrix ; 
 int /*<<< orphan*/  gl_PopName ; 
 int /*<<< orphan*/  gl_PrioritizeTextures ; 
 int /*<<< orphan*/  gl_PushAttrib ; 
 int /*<<< orphan*/  gl_PushClientAttrib ; 
 int /*<<< orphan*/  gl_PushMatrix ; 
 int /*<<< orphan*/  gl_PushName ; 
 int /*<<< orphan*/  gl_RasterPos4f ; 
 int /*<<< orphan*/  gl_ReadBuffer ; 
 int /*<<< orphan*/  gl_ReadPixels ; 
 int /*<<< orphan*/  gl_Rectf ; 
 int /*<<< orphan*/  gl_RenderMode ; 
 int /*<<< orphan*/  gl_Rotatef ; 
 int /*<<< orphan*/  gl_Scalef ; 
 int /*<<< orphan*/  gl_Scissor ; 
 int /*<<< orphan*/  gl_SelectBuffer ; 
 int /*<<< orphan*/  gl_ShadeModel ; 
 int /*<<< orphan*/  gl_StencilFunc ; 
 int /*<<< orphan*/  gl_StencilMask ; 
 int /*<<< orphan*/  gl_StencilOp ; 
 int /*<<< orphan*/  gl_TexCoord2f ; 
 int /*<<< orphan*/  gl_TexCoord4f ; 
 int /*<<< orphan*/  gl_TexCoordPointer ; 
 int /*<<< orphan*/  gl_TexEnvfv ; 
 int /*<<< orphan*/  gl_TexGenfv ; 
 int /*<<< orphan*/  gl_TexImage1D ; 
 int /*<<< orphan*/  gl_TexImage2D ; 
 int /*<<< orphan*/  gl_TexParameterfv ; 
 int /*<<< orphan*/  gl_TexSubImage1D ; 
 int /*<<< orphan*/  gl_TexSubImage2D ; 
 int /*<<< orphan*/  gl_Translatef ; 
 int /*<<< orphan*/  gl_VertexPointer ; 
 int /*<<< orphan*/  gl_Viewport ; 
 int /*<<< orphan*/  gl_vertex2f_nop ; 
 int /*<<< orphan*/  gl_vertex3f_nop ; 
 int /*<<< orphan*/  gl_vertex3fv_nop ; 
 int /*<<< orphan*/  gl_vertex4f_nop ; 

__attribute__((used)) static void init_exec_pointers( struct gl_api_table *table )
{
   table->Accum = gl_Accum;
   table->AlphaFunc = gl_AlphaFunc;
   table->AreTexturesResident = gl_AreTexturesResident;
   table->ArrayElement = gl_ArrayElement;
   table->Begin = gl_Begin;
   table->BindTexture = gl_BindTexture;
   table->Bitmap = gl_Bitmap;
   table->BlendFunc = gl_BlendFunc;
   table->CallList = gl_CallList;
   table->CallLists = gl_CallLists;
   table->Clear = gl_Clear;
   table->ClearAccum = gl_ClearAccum;
   table->ClearColor = gl_ClearColor;
   table->ClearDepth = gl_ClearDepth;
   table->ClearIndex = gl_ClearIndex;
   table->ClearStencil = gl_ClearStencil;
   table->ClipPlane = gl_ClipPlane;
   table->Color3f = gl_Color3f;
   table->Color3fv = gl_Color3fv;
   table->Color4f = gl_Color4f;
   table->Color4fv = gl_Color4fv;
   table->Color4ub = gl_Color4ub;
   table->Color4ubv = gl_Color4ubv;
   table->ColorMask = gl_ColorMask;
   table->ColorMaterial = gl_ColorMaterial;
   table->ColorPointer = gl_ColorPointer;
   table->ColorTable = gl_ColorTable;
   table->ColorSubTable = gl_ColorSubTable;
   table->CopyPixels = gl_CopyPixels;
   table->CopyTexImage1D = gl_CopyTexImage1D;
   table->CopyTexImage2D = gl_CopyTexImage2D;
   table->CopyTexSubImage1D = gl_CopyTexSubImage1D;
   table->CopyTexSubImage2D = gl_CopyTexSubImage2D;
   table->CullFace = gl_CullFace;
   table->DeleteLists = gl_DeleteLists;
   table->DeleteTextures = gl_DeleteTextures;
   table->DepthFunc = gl_DepthFunc;
   table->DepthMask = gl_DepthMask;
   table->DepthRange = gl_DepthRange;
   table->Disable = gl_Disable;
   table->DisableClientState = gl_DisableClientState;
   table->DrawArrays = gl_DrawArrays;
   table->DrawBuffer = gl_DrawBuffer;
   table->DrawElements = gl_DrawElements;
   table->DrawPixels = gl_DrawPixels;
   table->EdgeFlag = gl_EdgeFlag;
   table->EdgeFlagPointer = gl_EdgeFlagPointer;
   table->Enable = gl_Enable;
   table->EnableClientState = gl_EnableClientState;
   table->End = gl_End;
   table->EndList = gl_EndList;
   table->EvalCoord1f = gl_EvalCoord1f;
   table->EvalCoord2f = gl_EvalCoord2f;
   table->EvalMesh1 = gl_EvalMesh1;
   table->EvalMesh2 = gl_EvalMesh2;
   table->EvalPoint1 = gl_EvalPoint1;
   table->EvalPoint2 = gl_EvalPoint2;
   table->FeedbackBuffer = gl_FeedbackBuffer;
   table->Finish = gl_Finish;
   table->Flush = gl_Flush;
   table->Fogfv = gl_Fogfv;
   table->FrontFace = gl_FrontFace;
   table->Frustum = gl_Frustum;
   table->GenLists = gl_GenLists;
   table->GenTextures = gl_GenTextures;
   table->GetBooleanv = gl_GetBooleanv;
   table->GetClipPlane = gl_GetClipPlane;
   table->GetColorTable = gl_GetColorTable;
   table->GetColorTableParameteriv = gl_GetColorTableParameteriv;
   table->GetDoublev = gl_GetDoublev;
   table->GetError = gl_GetError;
   table->GetFloatv = gl_GetFloatv;
   table->GetIntegerv = gl_GetIntegerv;
   table->GetPointerv = gl_GetPointerv;
   table->GetLightfv = gl_GetLightfv;
   table->GetLightiv = gl_GetLightiv;
   table->GetMapdv = gl_GetMapdv;
   table->GetMapfv = gl_GetMapfv;
   table->GetMapiv = gl_GetMapiv;
   table->GetMaterialfv = gl_GetMaterialfv;
   table->GetMaterialiv = gl_GetMaterialiv;
   table->GetPixelMapfv = gl_GetPixelMapfv;
   table->GetPixelMapuiv = gl_GetPixelMapuiv;
   table->GetPixelMapusv = gl_GetPixelMapusv;
   table->GetPolygonStipple = gl_GetPolygonStipple;
   table->GetString = gl_GetString;
   table->GetTexEnvfv = gl_GetTexEnvfv;
   table->GetTexEnviv = gl_GetTexEnviv;
   table->GetTexGendv = gl_GetTexGendv;
   table->GetTexGenfv = gl_GetTexGenfv;
   table->GetTexGeniv = gl_GetTexGeniv;
   table->GetTexImage = gl_GetTexImage;
   table->GetTexLevelParameterfv = gl_GetTexLevelParameterfv;
   table->GetTexLevelParameteriv = gl_GetTexLevelParameteriv;
   table->GetTexParameterfv = gl_GetTexParameterfv;
   table->GetTexParameteriv = gl_GetTexParameteriv;
   table->Hint = gl_Hint;
   table->Indexf = gl_Indexf;
   table->Indexi = gl_Indexi;
   table->IndexMask = gl_IndexMask;
   table->IndexPointer = gl_IndexPointer;
   table->InitNames = gl_InitNames;
   table->InterleavedArrays = gl_InterleavedArrays;
   table->IsEnabled = gl_IsEnabled;
   table->IsList = gl_IsList;
   table->IsTexture = gl_IsTexture;
   table->LightModelfv = gl_LightModelfv;
   table->Lightfv = gl_Lightfv;
   table->LineStipple = gl_LineStipple;
   table->LineWidth = gl_LineWidth;
   table->ListBase = gl_ListBase;
   table->LoadIdentity = gl_LoadIdentity;
   table->LoadMatrixf = gl_LoadMatrixf;
   table->LoadName = gl_LoadName;
   table->LogicOp = gl_LogicOp;
   table->Map1f = gl_Map1f;
   table->Map2f = gl_Map2f;
   table->MapGrid1f = gl_MapGrid1f;
   table->MapGrid2f = gl_MapGrid2f;
   table->Materialfv = gl_Materialfv;
   table->MatrixMode = gl_MatrixMode;
   table->MultMatrixf = gl_MultMatrixf;
   table->NewList = gl_NewList;
   table->Normal3f = gl_Normal3f;
   table->NormalPointer = gl_NormalPointer;
   table->Normal3fv = gl_Normal3fv;
   table->Ortho = gl_Ortho;
   table->PassThrough = gl_PassThrough;
   table->PixelMapfv = gl_PixelMapfv;
   table->PixelStorei = gl_PixelStorei;
   table->PixelTransferf = gl_PixelTransferf;
   table->PixelZoom = gl_PixelZoom;
   table->PointSize = gl_PointSize;
   table->PolygonMode = gl_PolygonMode;
   table->PolygonOffset = gl_PolygonOffset;
   table->PolygonStipple = gl_PolygonStipple;
   table->PopAttrib = gl_PopAttrib;
   table->PopClientAttrib = gl_PopClientAttrib;
   table->PopMatrix = gl_PopMatrix;
   table->PopName = gl_PopName;
   table->PrioritizeTextures = gl_PrioritizeTextures;
   table->PushAttrib = gl_PushAttrib;
   table->PushClientAttrib = gl_PushClientAttrib;
   table->PushMatrix = gl_PushMatrix;
   table->PushName = gl_PushName;
   table->RasterPos4f = gl_RasterPos4f;
   table->ReadBuffer = gl_ReadBuffer;
   table->ReadPixels = gl_ReadPixels;
   table->Rectf = gl_Rectf;
   table->RenderMode = gl_RenderMode;
   table->Rotatef = gl_Rotatef;
   table->Scalef = gl_Scalef;
   table->Scissor = gl_Scissor;
   table->SelectBuffer = gl_SelectBuffer;
   table->ShadeModel = gl_ShadeModel;
   table->StencilFunc = gl_StencilFunc;
   table->StencilMask = gl_StencilMask;
   table->StencilOp = gl_StencilOp;
   table->TexCoord2f = gl_TexCoord2f;
   table->TexCoord4f = gl_TexCoord4f;
   table->TexCoordPointer = gl_TexCoordPointer;
   table->TexEnvfv = gl_TexEnvfv;
   table->TexGenfv = gl_TexGenfv;
   table->TexImage1D = gl_TexImage1D;
   table->TexImage2D = gl_TexImage2D;
   table->TexSubImage1D = gl_TexSubImage1D;
   table->TexSubImage2D = gl_TexSubImage2D;
   table->TexParameterfv = gl_TexParameterfv;
   table->Translatef = gl_Translatef;
   table->Vertex2f = gl_vertex2f_nop;
   table->Vertex3f = gl_vertex3f_nop;
   table->Vertex4f = gl_vertex4f_nop;
   table->Vertex3fv = gl_vertex3fv_nop;
   table->VertexPointer = gl_VertexPointer;
   table->Viewport = gl_Viewport;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr-10x
    case 0:
    {
          // static_instructions_O0 : 530
          // dynamic_instructions_O0 : 530
          // ------------------------------- 
          // static_instructions_O1 : 354
          // dynamic_instructions_O1 : 354
          // ------------------------------- 
          // static_instructions_O2 : 354
          // dynamic_instructions_O2 : 354
          // ------------------------------- 
          // static_instructions_O3 : 354
          // dynamic_instructions_O3 : 354
          // ------------------------------- 
          // static_instructions_Ofast : 354
          // dynamic_instructions_Ofast : 354
          // ------------------------------- 
          // static_instructions_Os : 354
          // dynamic_instructions_Os : 354
          // ------------------------------- 
          // static_instructions_Oz : 354
          // dynamic_instructions_Oz : 354
          // ------------------------------- 

          int _len_table0 = 100;
          struct gl_api_table * table = (struct gl_api_table *) malloc(_len_table0*sizeof(struct gl_api_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
              table[_i0].Viewport = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].VertexPointer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Vertex3fv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Vertex4f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Vertex3f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Vertex2f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Translatef = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexParameterfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexSubImage2D = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexSubImage1D = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexImage2D = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexImage1D = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexGenfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexEnvfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexCoordPointer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexCoord4f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexCoord2f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].StencilOp = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].StencilMask = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].StencilFunc = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ShadeModel = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].SelectBuffer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Scissor = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Scalef = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Rotatef = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].RenderMode = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Rectf = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ReadPixels = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ReadBuffer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].RasterPos4f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PushName = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PushMatrix = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PushClientAttrib = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PushAttrib = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PrioritizeTextures = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PopName = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PopMatrix = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PopClientAttrib = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PopAttrib = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PolygonStipple = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PolygonOffset = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PolygonMode = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PointSize = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PixelZoom = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PixelTransferf = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PixelStorei = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PixelMapfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PassThrough = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Ortho = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Normal3fv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].NormalPointer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Normal3f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].NewList = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].MultMatrixf = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].MatrixMode = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Materialfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].MapGrid2f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].MapGrid1f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Map2f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Map1f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].LogicOp = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].LoadName = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].LoadMatrixf = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].LoadIdentity = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ListBase = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].LineWidth = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].LineStipple = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Lightfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].LightModelfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].IsTexture = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].IsList = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].IsEnabled = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].InterleavedArrays = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].InitNames = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].IndexPointer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].IndexMask = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Indexi = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Indexf = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Hint = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexParameteriv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexParameterfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexLevelParameteriv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexLevelParameterfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexImage = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexGeniv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexGenfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexGendv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexEnviv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexEnvfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetString = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetPolygonStipple = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetPixelMapusv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetPixelMapuiv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetPixelMapfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetMaterialiv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetMaterialfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetMapiv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetMapfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetMapdv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetLightiv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetLightfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetPointerv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetIntegerv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetFloatv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetError = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetDoublev = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetColorTableParameteriv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetColorTable = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetClipPlane = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetBooleanv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GenTextures = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GenLists = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Frustum = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].FrontFace = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Fogfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Flush = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Finish = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].FeedbackBuffer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EvalPoint2 = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EvalPoint1 = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EvalMesh2 = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EvalMesh1 = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EvalCoord2f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EvalCoord1f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EndList = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].End = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EnableClientState = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Enable = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EdgeFlagPointer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EdgeFlag = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DrawPixels = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DrawElements = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DrawBuffer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DrawArrays = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DisableClientState = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Disable = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DepthRange = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DepthMask = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DepthFunc = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DeleteTextures = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DeleteLists = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].CullFace = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].CopyTexSubImage2D = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].CopyTexSubImage1D = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].CopyTexImage2D = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].CopyTexImage1D = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].CopyPixels = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ColorSubTable = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ColorTable = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ColorPointer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ColorMaterial = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ColorMask = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Color4ubv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Color4ub = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Color4fv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Color4f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Color3fv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Color3f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ClipPlane = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ClearStencil = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ClearIndex = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ClearDepth = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ClearColor = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ClearAccum = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Clear = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].CallLists = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].CallList = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].BlendFunc = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Bitmap = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].BindTexture = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Begin = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ArrayElement = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].AreTexturesResident = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].AlphaFunc = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Accum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          init_exec_pointers(table);
          free(table);
        
        break;
    }


    // empty
    case 1:
    {
          // static_instructions_O0 : 530
          // dynamic_instructions_O0 : 530
          // ------------------------------- 
          // static_instructions_O1 : 354
          // dynamic_instructions_O1 : 354
          // ------------------------------- 
          // static_instructions_O2 : 354
          // dynamic_instructions_O2 : 354
          // ------------------------------- 
          // static_instructions_O3 : 354
          // dynamic_instructions_O3 : 354
          // ------------------------------- 
          // static_instructions_Ofast : 354
          // dynamic_instructions_Ofast : 354
          // ------------------------------- 
          // static_instructions_Os : 354
          // dynamic_instructions_Os : 354
          // ------------------------------- 
          // static_instructions_Oz : 354
          // dynamic_instructions_Oz : 354
          // ------------------------------- 

          int _len_table0 = 1;
          struct gl_api_table * table = (struct gl_api_table *) malloc(_len_table0*sizeof(struct gl_api_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
              table[_i0].Viewport = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].VertexPointer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Vertex3fv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Vertex4f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Vertex3f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Vertex2f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Translatef = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexParameterfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexSubImage2D = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexSubImage1D = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexImage2D = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexImage1D = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexGenfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexEnvfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexCoordPointer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexCoord4f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].TexCoord2f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].StencilOp = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].StencilMask = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].StencilFunc = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ShadeModel = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].SelectBuffer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Scissor = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Scalef = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Rotatef = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].RenderMode = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Rectf = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ReadPixels = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ReadBuffer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].RasterPos4f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PushName = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PushMatrix = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PushClientAttrib = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PushAttrib = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PrioritizeTextures = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PopName = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PopMatrix = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PopClientAttrib = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PopAttrib = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PolygonStipple = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PolygonOffset = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PolygonMode = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PointSize = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PixelZoom = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PixelTransferf = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PixelStorei = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PixelMapfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].PassThrough = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Ortho = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Normal3fv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].NormalPointer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Normal3f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].NewList = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].MultMatrixf = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].MatrixMode = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Materialfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].MapGrid2f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].MapGrid1f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Map2f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Map1f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].LogicOp = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].LoadName = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].LoadMatrixf = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].LoadIdentity = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ListBase = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].LineWidth = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].LineStipple = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Lightfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].LightModelfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].IsTexture = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].IsList = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].IsEnabled = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].InterleavedArrays = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].InitNames = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].IndexPointer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].IndexMask = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Indexi = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Indexf = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Hint = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexParameteriv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexParameterfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexLevelParameteriv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexLevelParameterfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexImage = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexGeniv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexGenfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexGendv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexEnviv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetTexEnvfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetString = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetPolygonStipple = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetPixelMapusv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetPixelMapuiv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetPixelMapfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetMaterialiv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetMaterialfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetMapiv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetMapfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetMapdv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetLightiv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetLightfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetPointerv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetIntegerv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetFloatv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetError = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetDoublev = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetColorTableParameteriv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetColorTable = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetClipPlane = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GetBooleanv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GenTextures = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].GenLists = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Frustum = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].FrontFace = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Fogfv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Flush = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Finish = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].FeedbackBuffer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EvalPoint2 = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EvalPoint1 = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EvalMesh2 = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EvalMesh1 = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EvalCoord2f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EvalCoord1f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EndList = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].End = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EnableClientState = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Enable = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EdgeFlagPointer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].EdgeFlag = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DrawPixels = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DrawElements = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DrawBuffer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DrawArrays = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DisableClientState = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Disable = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DepthRange = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DepthMask = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DepthFunc = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DeleteTextures = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].DeleteLists = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].CullFace = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].CopyTexSubImage2D = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].CopyTexSubImage1D = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].CopyTexImage2D = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].CopyTexImage1D = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].CopyPixels = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ColorSubTable = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ColorTable = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ColorPointer = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ColorMaterial = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ColorMask = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Color4ubv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Color4ub = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Color4fv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Color4f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Color3fv = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Color3f = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ClipPlane = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ClearStencil = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ClearIndex = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ClearDepth = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ClearColor = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ClearAccum = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Clear = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].CallLists = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].CallList = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].BlendFunc = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Bitmap = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].BindTexture = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Begin = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].ArrayElement = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].AreTexturesResident = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].AlphaFunc = ((-2 * (next_i()%2)) + 1) * next_i();
          table[_i0].Accum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          init_exec_pointers(table);
          free(table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
