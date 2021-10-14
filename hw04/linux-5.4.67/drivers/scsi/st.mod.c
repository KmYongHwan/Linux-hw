#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x752832c, "noop_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x548bc933, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x5c8fc611, "scsi_register_driver" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x3cdf68c7, "__class_register" },
	{ 0x8b55dc9e, "scsi_device_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0x44d0d029, "blk_put_queue" },
	{ 0xe01dfded, "sysfs_create_link" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3aa3875f, "blk_get_queue" },
	{ 0x5495a1b7, "__alloc_disk_node" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x279599c8, "scsi_autopm_get_device" },
	{ 0xca1deba7, "scsi_autopm_put_device" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd1034c9c, "scsi_device_put" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb0e602eb, "memmove" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x3fa55769, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xfb578fc5, "memset" },
	{ 0x856befeb, "get_user_pages_fast" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xee6537d9, "blk_queue_rq_timeout" },
	{ 0x6248b8c7, "scsi_ioctl" },
	{ 0x26586a24, "scsi_cmd_ioctl" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7ddc77ec, "scsi_ioctl_block_when_processing_errors" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xdee352e3, "scsi_block_when_processing_errors" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xba312d7b, "current_task" },
	{ 0x61b0332e, "blk_rq_map_user" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x549e9adc, "blk_execute_rq_nowait" },
	{ 0x69acdf38, "memcpy" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x61d58859, "blk_get_request" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0x17b7de73, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x8a9df9e0, "blk_put_request" },
	{ 0x70aae21c, "blk_rq_unmap_user" },
	{ 0x29361773, "complete" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf591bdd1, "scsi_set_medium_removal" },
	{ 0x1a1bb9bc, "sdev_prefix_printk" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88e96942, "device_create" },
	{ 0x19d1aa1e, "cdev_add" },
	{ 0x2bdb9d00, "cdev_alloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0xc5399abe, "cdev_del" },
	{ 0xe193ad0d, "sysfs_remove_link" },
	{ 0x16933923, "put_disk" },
	{ 0x37a0cba, "kfree" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x96848186, "scnprintf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BC7BF3F0D5C28137E193E3A");
