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
	{ 0x2eda567a, "nd_btt_probe" },
	{ 0x481712b, "blk_cleanup_queue" },
	{ 0xb714b5c, "blk_queue_max_hw_sectors" },
	{ 0x11db28fd, "nvdimm_namespace_common_probe" },
	{ 0x597c0e82, "generic_end_io_acct" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa5d294f6, "nd_integrity_init" },
	{ 0x6b2a500e, "nvdimm_namespace_capacity" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x6265c91a, "revalidate_disk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7e20a54d, "is_nd_btt" },
	{ 0x5495a1b7, "__alloc_disk_node" },
	{ 0x61817954, "nvdimm_namespace_disk_name" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x9dd6fd4, "blk_alloc_queue" },
	{ 0xba312d7b, "current_task" },
	{ 0x27c51a3f, "to_nd_btt" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xb29b06fc, "del_gendisk" },
	{ 0x4f3ba215, "__nd_driver_register" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xc50793a, "generic_start_io_acct" },
	{ 0x2d715234, "bio_endio" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xb091f655, "nvdimm_namespace_detach_btt" },
	{ 0x29869d14, "blk_queue_flag_set" },
	{ 0x9b64a05d, "blk_queue_make_request" },
	{ 0xd79f07cc, "nvdimm_namespace_attach_btt" },
	{ 0x16933923, "put_disk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc681227b, "nvdimm_revalidate_disk" },
	{ 0x3e0bc3d7, "device_add_disk" },
	{ 0x12ff81a7, "blk_queue_logical_block_size" },
	{ 0xc453ff58, "bio_integrity_prep" },
};

MODULE_INFO(depends, "nd_btt");


MODULE_INFO(srcversion, "1AD06B999B337EB81017D27");
