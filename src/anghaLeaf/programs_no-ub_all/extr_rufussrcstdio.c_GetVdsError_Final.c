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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int DWORD ;

/* Variables and functions */

__attribute__((used)) static const char *GetVdsError(DWORD error_code)
{
	switch (error_code) {
	case 0x80042400:	// VDS_E_NOT_SUPPORTED
		return "The operation is not supported by the object.";
	case 0x80042401:	// VDS_E_INITIALIZED_FAILED
		return "VDS or the provider failed to initialize.";
	case 0x80042402:	// VDS_E_INITIALIZE_NOT_CALLED
		return "VDS did not call the hardware provider's initialization method.";
	case 0x80042403:	// VDS_E_ALREADY_REGISTERED
		return "The provider is already registered.";
	case 0x80042404:	// VDS_E_ANOTHER_CALL_IN_PROGRESS
		return "A concurrent second call is made on an object before the first call is completed.";
	case 0x80042405:	// VDS_E_OBJECT_NOT_FOUND
		return "The specified object was not found.";
	case 0x80042406:	// VDS_E_INVALID_SPACE
		return "The specified space is neither free nor valid.";
	case 0x80042407:	// VDS_E_PARTITION_LIMIT_REACHED
		return "No more partitions can be created on the specified disk.";
	case 0x80042408:	// VDS_E_PARTITION_NOT_EMPTY
		return "The extended partition is not empty.";
	case 0x80042409:	// VDS_E_OPERATION_PENDING
		return "The operation is still in progress.";
	case 0x8004240A:	// VDS_E_OPERATION_DENIED
		return "The operation is not permitted on the specified disk, partition, or volume.";
	case 0x8004240B:	// VDS_E_OBJECT_DELETED
		return "The object no longer exists.";
	case 0x8004240C:	// VDS_E_CANCEL_TOO_LATE
		return "The operation can no longer be canceled.";
	case 0x8004240D:	// VDS_E_OPERATION_CANCELED
		return "The operation has already been canceled.";
	case 0x8004240E:	// VDS_E_CANNOT_EXTEND
		return "The file system does not support extending this volume.";
	case 0x8004240F:	// VDS_E_NOT_ENOUGH_SPACE
		return "There is not enough space to complete the operation.";
	case 0x80042410:	// VDS_E_NOT_ENOUGH_DRIVE
		return "There are not enough free disk drives in the subsystem to complete the operation.";
	case 0x80042411:	// VDS_E_BAD_COOKIE
		return "The cookie was not found.";
	case 0x80042412:	// VDS_E_NO_MEDIA
		return "There is no removable media in the drive.";
	case 0x80042413:	// VDS_E_DEVICE_IN_USE
		return "The device is currently in use.";
	case 0x80042414:	// VDS_E_DISK_NOT_EMPTY
		return "The disk contains partitions or volumes.";
	case 0x80042415:	// VDS_E_INVALID_OPERATION
		return "The specified operation is not valid.";
	case 0x80042416:	// VDS_E_PATH_NOT_FOUND
		return "The specified path was not found.";
	case 0x80042417:	// VDS_E_DISK_NOT_INITIALIZED
		return "The specified disk has not been initialized.";
	case 0x80042418:	// VDS_E_NOT_AN_UNALLOCATED_DISK
		return "The specified disk is not an unallocated disk.";
	case 0x80042419:	// VDS_E_UNRECOVERABLE_ERROR
		return "An unrecoverable error occurred. The service MUST shut down.";
	case 0x0004241A:	// VDS_S_DISK_PARTIALLY_CLEANED
		return "The clean operation was not a full clean or was canceled before it could be completed.";
	case 0x8004241B:	// VDS_E_DMADMIN_SERVICE_CONNECTION_FAILED
		return "The provider failed to connect to the LDMA service.";
	case 0x8004241C:	// VDS_E_PROVIDER_INITIALIZATION_FAILED
		return "The provider failed to initialize.";
	case 0x8004241D:	// VDS_E_OBJECT_EXISTS
		return "The object already exists.";
	case 0x8004241E:	// VDS_E_NO_DISKS_FOUND
		return "No disks were found on the target machine.";
	case 0x8004241F:	// VDS_E_PROVIDER_CACHE_CORRUPT
		return "The cache for a provider is corrupt.";
	case 0x80042420:	// VDS_E_DMADMIN_METHOD_CALL_FAILED
		return "A method call to the LDMA service failed.";
	case 0x00042421:	// VDS_S_PROVIDER_ERROR_LOADING_CACHE
		return "The provider encountered errors while loading the cache.";
	case 0x80042422:	// VDS_E_PROVIDER_VOL_DEVICE_NAME_NOT_FOUND
		return "The device form of the volume pathname could not be retrieved.";
	case 0x80042423:	// VDS_E_PROVIDER_VOL_OPEN
		return "Failed to open the volume device";
	case 0x80042424:	// VDS_E_DMADMIN_CORRUPT_NOTIFICATION
		return "A corrupt notification was sent from the LDMA service.";
	case 0x80042425:	// VDS_E_INCOMPATIBLE_FILE_SYSTEM
		return "The file system is incompatible with the specified operation.";
	case 0x80042426:	// VDS_E_INCOMPATIBLE_MEDIA
		return "The media is incompatible with the specified operation.";
	case 0x80042427:	// VDS_E_ACCESS_DENIED
		return "Access is denied. A VDS operation MUST run elevated.";
	case 0x80042428:	// VDS_E_MEDIA_WRITE_PROTECTED
		return "The media is write-protected.";
	case 0x80042429:	// VDS_E_BAD_LABEL
		return "The volume label is not valid.";
	case 0x8004242A:	// VDS_E_CANT_QUICK_FORMAT
		return "The volume cannot be quick-formatted.";
	case 0x8004242B:	// VDS_E_IO_ERROR
		return "An I/O error occurred during the operation.";
	case 0x8004242C:	// VDS_E_VOLUME_TOO_SMALL
		return "The volume size is too small.";
	case 0x8004242D:	// VDS_E_VOLUME_TOO_BIG
		return "The volume size is too large.";
	case 0x8004242E:	// VDS_E_CLUSTER_SIZE_TOO_SMALL
		return "The cluster size is too small.";
	case 0x8004242F:	// VDS_E_CLUSTER_SIZE_TOO_BIG
		return "The cluster size is too large.";
	case 0x80042430:	// VDS_E_CLUSTER_COUNT_BEYOND_32BITS
		return "The number of clusters is too large to be represented as a 32-bit integer.";
	case 0x80042431:	// VDS_E_OBJECT_STATUS_FAILED
		return "The component that the object represents has failed.";
	case 0x80042432:	// VDS_E_VOLUME_INCOMPLETE
		return "The volume is incomplete.";
	case 0x80042433:	// VDS_E_EXTENT_SIZE_LESS_THAN_MIN
		return "The specified extent size is too small.";
	case 0x00042434:	// VDS_S_UPDATE_BOOTFILE_FAILED
		return "The operation was successful, but VDS failed to update the boot options.";
	case 0x00042436:	// VDS_S_BOOT_PARTITION_NUMBER_CHANGE
	case 0x80042436:	// VDS_E_BOOT_PARTITION_NUMBER_CHANGE
		return "The boot partition's partition number will change as a result of the operation.";
	case 0x80042437:	// VDS_E_NO_FREE_SPACE
		return "The specified disk does not have enough free space to complete the operation.";
	case 0x80042438:	// VDS_E_ACTIVE_PARTITION
		return "An active partition was detected on the selected disk.";
	case 0x80042439:	// VDS_E_PARTITION_OF_UNKNOWN_TYPE
		return "The partition information cannot be read.";
	case 0x8004243A:	// VDS_E_LEGACY_VOLUME_FORMAT
		return "A partition with an unknown type was detected on the specified disk.";
	case 0x8004243C:	// VDS_E_MIGRATE_OPEN_VOLUME
		return "A volume on the specified disk could not be opened.";
	case 0x8004243D:	// VDS_E_VOLUME_NOT_ONLINE
		return "The volume is not online.";
	case 0x8004243E:	// VDS_E_VOLUME_NOT_HEALTHY
		return "The volume is failing or has failed.";
	case 0x8004243F:	// VDS_E_VOLUME_SPANS_DISKS
		return "The volume spans multiple disks.";
	case 0x80042440:	// VDS_E_REQUIRES_CONTIGUOUS_DISK_SPACE
		return "The volume does not consist of a single disk extent.";
	case 0x80042441:	// VDS_E_BAD_PROVIDER_DATA
		return "A provider returned bad data.";
	case 0x80042442:	// VDS_E_PROVIDER_FAILURE
		return "A provider failed to complete an operation.";
	case 0x00042443:	// VDS_S_VOLUME_COMPRESS_FAILED
		return "The file system was formatted successfully but could not be compressed.";
	case 0x80042444:	// VDS_E_PACK_OFFLINE
		return "The pack is offline.";
	case 0x80042445:	// VDS_E_VOLUME_NOT_A_MIRROR
		return "The volume is not a mirror.";
	case 0x80042446:	// VDS_E_NO_EXTENTS_FOR_VOLUME
		return "No extents were found for the volume.";
	case 0x80042447:	// VDS_E_DISK_NOT_LOADED_TO_CACHE
		return "The migrated disk failed to load to the cache.";
	case 0x80042448:	// VDS_E_INTERNAL_ERROR
		return "VDS encountered an internal error.";
	case 0x8004244A:	// VDS_E_PROVIDER_TYPE_NOT_SUPPORTED
		return "The method call is not supported for the specified provider type.";
	case 0x8004244B:	// VDS_E_DISK_NOT_ONLINE
		return "One or more of the specified disks are not online.";
	case 0x8004244C:	// VDS_E_DISK_IN_USE_BY_VOLUME
		return "One or more extents of the disk are already being used by the volume.";
	case 0x0004244D:	// VDS_S_IN_PROGRESS
		return "The asynchronous operation is in progress.";
	case 0x8004244E:	// VDS_E_ASYNC_OBJECT_FAILURE
		return "Failure initializing the asynchronous object.";
	case 0x8004244F:	// VDS_E_VOLUME_NOT_MOUNTED
		return "The volume is not mounted.";
	case 0x80042450:	// VDS_E_PACK_NOT_FOUND
		return "The pack was not found.";
	case 0x80042453:	// VDS_E_OBJECT_OUT_OF_SYNC
		return "The reference to the object might be stale.";
	case 0x80042454:	// VDS_E_MISSING_DISK
		return "The specified disk could not be found.";
	case 0x80042455:	// VDS_E_DISK_PNP_REG_CORRUPT
		return "The provider's list of PnP registered disks has become corrupted.";
	case 0x80042457:	// VDS_E_NO_DRIVELETTER_FLAG
		return "The provider does not support the VDS_VF_NO DRIVELETTER volume flag.";
	case 0x80042459:	// VDS_E_REVERT_ON_CLOSE_SET
		return "Some volume flags are already set.";
	case 0x0004245B:	// VDS_S_UNABLE_TO_GET_GPT_ATTRIBUTES
		return "Unable to retrieve the GPT attributes for this volume.";
	case 0x8004245C:	// VDS_E_VOLUME_TEMPORARILY_DISMOUNTED
		return "The volume is already dismounted temporarily.";
	case 0x8004245D:	// VDS_E_VOLUME_PERMANENTLY_DISMOUNTED
		return "The volume is already permanently dismounted.";
	case 0x8004245E:	// VDS_E_VOLUME_HAS_PATH
		return "The volume cannot be dismounted permanently because it still has an access path.";
	case 0x8004245F:	// VDS_E_TIMEOUT
		return "The operation timed out.";
	case 0x80042461:	// VDS_E_LDM_TIMEOUT
		return "The operation timed out in the LDMA service. Retry the operation.";
	case 0x80042462:	// VDS_E_REVERT_ON_CLOSE_MISMATCH
		return "The flags to be cleared do not match the flags that were set previously.";
	case 0x80042463:	// VDS_E_RETRY
		return "The operation failed. Retry the operation.";
	case 0x80042464:	// VDS_E_ONLINE_PACK_EXISTS
		return "The operation failed, because an online pack object already exists.";
	case 0x80042468:	// VDS_E_MAX_USABLE_MBR
		return "Only the first 2TB are usable on large MBR disks.";
	case 0x80042500:	// VDS_E_NO_SOFTWARE_PROVIDERS_LOADED
		return "There are no software providers loaded.";
	case 0x80042501:	// VDS_E_DISK_NOT_MISSING
		return "The disk is not missing.";
	case 0x80042502:	// VDS_E_NO_VOLUME_LAYOUT
		return "The volume's layout could not be retrieved.";
	case 0x80042503:	// VDS_E_CORRUPT_VOLUME_INFO
		return "The volume's driver information is corrupted.";
	case 0x80042504:	// VDS_E_INVALID_ENUMERATOR
		return "The enumerator is corrupted";
	case 0x80042505:	// VDS_E_DRIVER_INTERNAL_ERROR
		return "An internal error occurred in the volume management driver.";
	case 0x80042507:	// VDS_E_VOLUME_INVALID_NAME
		return "The volume name is not valid.";
	case 0x00042508:	// VDS_S_DISK_IS_MISSING
		return "The disk is missing and not all information could be returned.";
	case 0x80042509:	// VDS_E_CORRUPT_PARTITION_INFO
		return "The disk's partition information is corrupted.";
	case 0x0004250A:	// VDS_S_NONCONFORMANT_PARTITION_INFO
		return "The disk's partition information does not conform to what is expected on a dynamic disk.";
	case 0x8004250B:	// VDS_E_CORRUPT_EXTENT_INFO
		return "The disk's extent information is corrupted.";
	case 0x0004250E:	// VDS_S_SYSTEM_PARTITION
		return "Warning: There was a failure while checking for the system partition.";
	case 0x8004250F:	// VDS_E_BAD_PNP_MESSAGE
		return "The PNP service sent a corrupted notification to the provider.";
	case 0x80042510:	// VDS_E_NO_PNP_DISK_ARRIVE
	case 0x80042511:	// VDS_E_NO_PNP_VOLUME_ARRIVE
		return "No disk/volume arrival notification was received.";
	case 0x80042512:	// VDS_E_NO_PNP_DISK_REMOVE
	case 0x80042513:	// VDS_E_NO_PNP_VOLUME_REMOVE
		return "No disk/volume removal notification was received.";
	case 0x80042514:	// VDS_E_PROVIDER_EXITING
		return "The provider is exiting.";
	case 0x00042517:	// VDS_S_NO_NOTIFICATION
		return "No volume arrival notification was received.";
	case 0x80042519:	// VDS_E_INVALID_DISK
		return "The specified disk is not valid.";
	case 0x8004251A:	// VDS_E_INVALID_PACK
		return "The specified disk pack is not valid.";
	case 0x8004251B:	// VDS_E_VOLUME_ON_DISK
		return "This operation is not allowed on disks with volumes.";
	case 0x8004251C:	// VDS_E_DRIVER_INVALID_PARAM
		return "The driver returned an invalid parameter error.";
	case 0x8004253D:	// VDS_E_DRIVER_OBJECT_NOT_FOUND
		return "The object was not found in the driver cache.";
	case 0x8004253E:	// VDS_E_PARTITION_NOT_CYLINDER_ALIGNED
		return "The disk layout contains partitions which are not cylinder aligned.";
	case 0x8004253F:	// VDS_E_DISK_LAYOUT_PARTITIONS_TOO_SMALL
		return "The disk layout contains partitions which are less than the minimum required size.";
	case 0x80042540:	// VDS_E_DISK_IO_FAILING
		return "The I/O to the disk is failing.";
	case 0x80042543:	// VDS_E_GPT_ATTRIBUTES_INVALID
		return "Invalid GPT attributes were specified.";
	case 0x8004254D:	// VDS_E_UNEXPECTED_DISK_LAYOUT_CHANGE
		return "An unexpected layout change occurred external to the volume manager.";
	case 0x8004254E:	// VDS_E_INVALID_VOLUME_LENGTH
		return "The volume length is invalid.";
	case 0x8004254F:	// VDS_E_VOLUME_LENGTH_NOT_SECTOR_SIZE_MULTIPLE
		return "The volume length is not a multiple of the sector size.";
	case 0x80042550:	// VDS_E_VOLUME_NOT_RETAINED
		return "The volume does not have a retained partition association.";
	case 0x80042551:	// VDS_E_VOLUME_RETAINED
		return "The volume already has a retained partition association.";
	case 0x80042553:	// VDS_E_ALIGN_BEYOND_FIRST_CYLINDER
		return "The specified alignment is beyond the first cylinder.";
	case 0x80042554:	// VDS_E_ALIGN_NOT_SECTOR_SIZE_MULTIPLE
		return "The specified alignment is not a multiple of the sector size.";
	case 0x80042555:	// VDS_E_ALIGN_NOT_ZERO
		return "The specified partition type cannot be created with a non-zero alignment.";
	case 0x80042556:	// VDS_E_CACHE_CORRUPT
		return "The service's cache has become corrupt.";
	case 0x80042557:	// VDS_E_CANNOT_CLEAR_VOLUME_FLAG
		return "The specified volume flag cannot be cleared.";
	case 0x80042558:	// VDS_E_DISK_BEING_CLEANED
		return "The operation is not allowed on a disk that is in the process of being cleaned.";
	case 0x8004255A:	// VDS_E_DISK_REMOVEABLE
		return "The operation is not supported on removable media.";
	case 0x8004255B:	// VDS_E_DISK_REMOVEABLE_NOT_EMPTY
		return "The operation is not supported on a non-empty removable disk.";
	case 0x8004255C:	// VDS_E_DRIVE_LETTER_NOT_FREE
		return "The specified drive letter is not free to be assigned.";
	case 0x8004255E:	// VDS_E_INVALID_DRIVE_LETTER
		return "The specified drive letter is not valid.";
	case 0x8004255F:	// VDS_E_INVALID_DRIVE_LETTER_COUNT
		return "The specified number of drive letters to retrieve is not valid.";
	case 0x80042560:	// VDS_E_INVALID_FS_FLAG
		return "The specified file system flag is not valid.";
	case 0x80042561:	// VDS_E_INVALID_FS_TYPE
		return "The specified file system is not valid.";
	case 0x80042562:	// VDS_E_INVALID_OBJECT_TYPE
		return "The specified object type is not valid.";
	case 0x80042563:	// VDS_E_INVALID_PARTITION_LAYOUT
		return "The specified partition layout is invalid.";
	case 0x80042564:	// VDS_E_INVALID_PARTITION_STYLE
		return "VDS only supports MBR or GPT partition style disks.";
	case 0x80042565:	// VDS_E_INVALID_PARTITION_TYPE
		return "The specified partition type is not valid for this operation.";
	case 0x80042566:	// VDS_E_INVALID_PROVIDER_CLSID
	case 0x80042567:	// VDS_E_INVALID_PROVIDER_ID
	case 0x8004256A:	// VDS_E_INVALID_PROVIDER_VERSION_GUID
		return "A NULL GUID was passed to the provider.";
	case 0x80042568:	// VDS_E_INVALID_PROVIDER_NAME
		return "The specified provider name is invalid.";
	case 0x80042569:	// VDS_E_INVALID_PROVIDER_TYPE
		return "The specified provider type is invalid.";
	case 0x8004256B:	// VDS_E_INVALID_PROVIDER_VERSION_STRING
		return "The specified provider version string is invalid.";
	case 0x8004256C:	// VDS_E_INVALID_QUERY_PROVIDER_FLAG
		return "The specified query provider flag is invalid.";
	case 0x8004256D:	// VDS_E_INVALID_SERVICE_FLAG
		return "The specified service flag is invalid.";
	case 0x8004256E:	// VDS_E_INVALID_VOLUME_FLAG
		return "The specified volume flag is invalid.";
	case 0x8004256F:	// VDS_E_PARTITION_NOT_OEM
		return "The operation is only supported on an OEM, ESP, or unknown partition.";
	case 0x80042570:	// VDS_E_PARTITION_PROTECTED
		return "Cannot delete a protected partition without the force protected parameter set.";
	case 0x80042571:	// VDS_E_PARTITION_STYLE_MISMATCH
		return "The specified partition style is not the same as the disk's partition style.";
	case 0x80042572:	// VDS_E_PROVIDER_INTERNAL_ERROR
		return "An internal error has occurred in the provider.";
	case 0x80042575:	// VDS_E_UNRECOVERABLE_PROVIDER_ERROR
		return "An unrecoverable error occurred in the provider.";
	case 0x80042576:	// VDS_E_VOLUME_HIDDEN
		return "Cannot assign a mount point to a hidden volume.";
	case 0x00042577:	// VDS_S_DISMOUNT_FAILED
	case 0x00042578:	// VDS_S_REMOUNT_FAILED
		return "Failed to dismount/remount the volume after setting the volume flags.";
	case 0x80042579:	// VDS_E_FLAG_ALREADY_SET
		return "Cannot set the specified flag as revert-on-close because it is already set.";
	case 0x8004257B:	// VDS_E_DISTINCT_VOLUME
		return "The input volume id cannot be the id of the volume that is the target of the operation.";
	case 0x00042583:	// VDS_S_FS_LOCK
		return "Failed to obtain a file system lock.";
	case 0x80042584:	// VDS_E_READONLY
		return "The volume is read only.";
	case 0x80042585:	// VDS_E_INVALID_VOLUME_TYPE
		return "The volume type is invalid for this operation.";
	case 0x80042588:	// VDS_E_VOLUME_MIRRORED
		return "This operation is not supported on a mirrored volume.";
	case 0x80042589:	// VDS_E_VOLUME_SIMPLE_SPANNED
		return "The operation is only supported on simple or spanned volumes.";
	case 0x8004258C:	// VDS_E_PARTITION_MSR
	case 0x8004258D:	// VDS_E_PARTITION_LDM
		return "The operation is not supported on this type of partitions.";
	case 0x0004258E:	// VDS_S_WINPE_BOOTENTRY
		return "The boot entries cannot be updated automatically on WinPE.";
	case 0x8004258F:	// VDS_E_ALIGN_NOT_A_POWER_OF_TWO
		return "The alignment is not a power of two.";
	case 0x80042590:	// VDS_E_ALIGN_IS_ZERO
		return "The alignment is zero.";
	case 0x80042593:	// VDS_E_FS_NOT_DETERMINED
		return "The default file system could not be determined.";
	case 0x80042595:	// VDS_E_DISK_NOT_OFFLINE
		return "This disk is already online.";
	case 0x80042596:	// VDS_E_FAILED_TO_ONLINE_DISK
		return "The online operation failed.";
	case 0x80042597:	// VDS_E_FAILED_TO_OFFLINE_DISK
		return "The offline operation failed.";
	case 0x80042598:	// VDS_E_BAD_REVISION_NUMBER
		return "The operation could not be completed because the specified revision number is not supported.";
	case 0x00042700:	// VDS_S_NAME_TRUNCATED
		return "The name was set successfully but had to be truncated.";
	case 0x80042701:	// VDS_E_NAME_NOT_UNIQUE
		return "The specified name is not unique.";
	case 0x8004270F:	// VDS_E_NO_DISK_PATHNAME
		return "The disk's path could not be retrieved. Some operations on the disk might fail.";
	case 0x80042711:	// VDS_E_NO_VOLUME_PATHNAME
		return "The path could not be retrieved for one or more volumes.";
	case 0x80042712:	// VDS_E_PROVIDER_CACHE_OUTOFSYNC
		return "The provider's cache is not in sync with the driver cache.";
	case 0x80042713:	// VDS_E_NO_IMPORT_TARGET
		return "No import target was set for the subsystem.";
	case 0x00042714:	// VDS_S_ALREADY_EXISTS
		return "The object already exists.";
	case 0x00042715:	// VDS_S_PROPERTIES_INCOMPLETE
		return "Some, but not all, of the properties were successfully retrieved.";
	case 0x80042803:	// VDS_E_UNABLE_TO_FIND_BOOT_DISK
		return "Volume disk extent information could not be retrieved for the boot volume.";
	case 0x80042807:	// VDS_E_BOOT_DISK
		return "Disk attributes cannot be changed on the boot disk.";
	case 0x00042808:	// VDS_S_DISK_MOUNT_FAILED
	case 0x00042809:	// VDS_S_DISK_DISMOUNT_FAILED
		return "One or more of the volumes on the disk could not be mounted/dismounted.";
	case 0x8004280A:	// VDS_E_DISK_IS_OFFLINE
	case 0x8004280B:	// VDS_E_DISK_IS_READ_ONLY
		return "The operation cannot be performed on a disk that is offline or read-only.";
	case 0x8004280C:	// VDS_E_PAGEFILE_DISK
	case 0x8004280D:	// VDS_E_HIBERNATION_FILE_DISK
	case 0x8004280E:	// VDS_E_CRASHDUMP_DISK
		return "The operation cannot be performed on a disk that contains a pagefile, hibernation or crashdump volume.";
	case 0x8004280F:	// VDS_E_UNABLE_TO_FIND_SYSTEM_DISK
		return "A system error occurred while retrieving the system disk information.";
	case 0x80042810:	// VDS_E_INCORRECT_SYSTEM_VOLUME_EXTENT_INFO
		return "Multiple disk extents reported for the system volume - system error.";
	case 0x80042811:	// VDS_E_SYSTEM_DISK
		return "Disk attributes cannot be changed on the current system disk or BIOS disk 0.";
	case 0x80042823:	// VDS_E_SECTOR_SIZE_ERROR
		return "The sector size MUST be non-zero, a power of 2, and less than the maximum sector size.";
	case 0x80042907:	// VDS_E_SUBSYSTEM_ID_IS_NULL
		return "The provider returned a NULL subsystem identification string.";
	case 0x8004290C:	// VDS_E_REBOOT_REQUIRED
		return "A reboot is required before any further operations are initiated.";
	case 0x8004290D:	// VDS_E_VOLUME_GUID_PATHNAME_NOT_ALLOWED
		return "Volume GUID pathnames are not valid input to this method.";
	case 0x8004290E:	// VDS_E_BOOT_PAGEFILE_DRIVE_LETTER
		return "Assigning or removing drive letters on the current boot or pagefile volume is not allowed.";
	case 0x8004290F:	// VDS_E_DELETE_WITH_CRITICAL
		return "Delete is not allowed on a critical volume.";
	case 0x80042910:	// VDS_E_CLEAN_WITH_DATA
	case 0x80042911:	// VDS_E_CLEAN_WITH_OEM
		return "The FORCE parameter MUST be set to TRUE in order to clean a disk that contains a data or OEM volume.";
	case 0x80042912:	// VDS_E_CLEAN_WITH_CRITICAL
		return "Clean is not allowed on a critical disk.";
	case 0x80042913:	// VDS_E_FORMAT_CRITICAL
		return "Format is not allowed on a critical volume.";
	case 0x80042914:	// VDS_E_NTFS_FORMAT_NOT_SUPPORTED
	case 0x80042915:	// VDS_E_FAT32_FORMAT_NOT_SUPPORTED
	case 0x80042916:	// VDS_E_FAT_FORMAT_NOT_SUPPORTED
		return "The requested file system format is not supported on this volume.";
	case 0x80042917:	// VDS_E_FORMAT_NOT_SUPPORTED
		return "The volume is not formattable.";
	case 0x80042918:	// VDS_E_COMPRESSION_NOT_SUPPORTED
		return "The specified file system does not support compression.";
	default:
		return NULL;
	}
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int error_code = 255;
          const char * benchRet = GetVdsError(error_code);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
