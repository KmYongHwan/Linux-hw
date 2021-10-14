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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x89688e79, "unregister_md_personality" },
	{ 0x79525988, "bio_clone_fast" },
	{ 0xc7bca1d6, "disk_stack_limits" },
	{ 0x9c2786dc, "generic_make_request" },
	{ 0x2d715234, "bio_endio" },
	{ 0x739758b1, "bio_put" },
	{ 0xd13d5b86, "md_set_array_sectors" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4f10df48, "md_check_no_bitmap" },
	{ 0xc3d39829, "register_md_personality" },
	{ 0x68609863, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0F95D2C120715FC3BE34CFD");
