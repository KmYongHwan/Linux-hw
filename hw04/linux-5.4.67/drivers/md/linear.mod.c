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
	{ 0xdf43f569, "bio_split" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x234b6df2, "mddev_suspend" },
	{ 0x2246b4dd, "__tracepoint_block_bio_remap" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x89688e79, "unregister_md_personality" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x6265c91a, "revalidate_disk" },
	{ 0xe7e88b18, "md_flush_request" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc7bca1d6, "disk_stack_limits" },
	{ 0x2817931, "bio_chain" },
	{ 0x9c2786dc, "generic_make_request" },
	{ 0x2d715234, "bio_endio" },
	{ 0x4d1be72f, "blk_queue_flag_clear" },
	{ 0x29869d14, "blk_queue_flag_set" },
	{ 0x4ba20fb3, "bdevname" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xd13d5b86, "md_set_array_sectors" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0xda52689c, "mddev_resume" },
	{ 0x4f10df48, "md_check_no_bitmap" },
	{ 0x9b8fc947, "md_integrity_register" },
	{ 0xc3d39829, "register_md_personality" },
	{ 0x68609863, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D5D73E7CB11DF4C476ECE5C");
