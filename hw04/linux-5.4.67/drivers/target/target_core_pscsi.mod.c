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
	{ 0xb3d61ebd, "passthrough_attrib_attrs" },
	{ 0x4dcfab9b, "target_backend_unregister" },
	{ 0x5619572c, "transport_backend_register" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0x5151274a, "blkdev_get_by_path" },
	{ 0x8b55dc9e, "scsi_device_get" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3a20a9d7, "transport_set_vpd_ident_type" },
	{ 0x142072c0, "transport_set_vpd_assoc" },
	{ 0xf3c2dfe0, "transport_set_vpd_proto_id" },
	{ 0x871ffd6, "transport_set_vpd_ident" },
	{ 0x571da921, "__scsi_execute" },
	{ 0x56470118, "__warn_printk" },
	{ 0x549e9adc, "blk_execute_rq_nowait" },
	{ 0x87b8798d, "sg_next" },
	{ 0x76c4c529, "bio_alloc_bioset" },
	{ 0x76bd2900, "blk_rq_append_bio" },
	{ 0xb3bde7e6, "bio_add_pc_page" },
	{ 0x61d58859, "blk_get_request" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x6eebf902, "passthrough_parse_cdb" },
	{ 0xf9d843e4, "scsi_host_lookup" },
	{ 0x1bd3c261, "blkdev_put" },
	{ 0xd1034c9c, "scsi_device_put" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4e3567f7, "match_int" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x739758b1, "bio_put" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x7689848b, "transport_kunmap_data_sg" },
	{ 0xe087cf7e, "transport_kmap_data_sg" },
	{ 0x3714b337, "target_lun_is_rdonly" },
	{ 0x7606642, "target_complete_cmd_with_length" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8936bfd, "transport_copy_sense_to_cmd" },
	{ 0x8a9df9e0, "blk_put_request" },
	{ 0xbcbc321b, "target_complete_cmd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbb3d2c11, "pv_ops" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "390BA65A9599CF3BB9DFB2C");
