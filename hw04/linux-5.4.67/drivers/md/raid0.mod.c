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
	{ 0x89688e79, "unregister_md_personality" },
	{ 0xc3d39829, "register_md_personality" },
	{ 0x4d1be72f, "blk_queue_flag_clear" },
	{ 0x9b8fc947, "md_integrity_register" },
	{ 0xd13d5b86, "md_set_array_sectors" },
	{ 0x29869d14, "blk_queue_flag_set" },
	{ 0xc7bca1d6, "disk_stack_limits" },
	{ 0x46607eb3, "blk_queue_io_opt" },
	{ 0x78dbd450, "blk_queue_io_min" },
	{ 0x2decb527, "blk_queue_max_discard_sectors" },
	{ 0x7ae09bcd, "blk_queue_max_write_zeroes_sectors" },
	{ 0xa0a88ba5, "blk_queue_max_write_same_sectors" },
	{ 0xb714b5c, "blk_queue_max_hw_sectors" },
	{ 0x4f10df48, "md_check_no_bitmap" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xf95ecf34, "bio_clone_blkg_association" },
	{ 0xca5673b0, "__blkdev_issue_discard" },
	{ 0xe7e88b18, "md_flush_request" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x2817931, "bio_chain" },
	{ 0xdf43f569, "bio_split" },
	{ 0x2d715234, "bio_endio" },
	{ 0x9c2786dc, "generic_make_request" },
	{ 0x2246b4dd, "__tracepoint_block_bio_remap" },
	{ 0x68609863, "bio_associate_blkg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4ba20fb3, "bdevname" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D52A565BA1DEA4AF6144392");
