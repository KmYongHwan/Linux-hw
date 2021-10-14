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
	{ 0x74801e4, "param_ops_ulong" },
	{ 0x77179d2e, "param_ops_string" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xa1957f18, "unregister_mtd_user" },
	{ 0x24d472ee, "register_mtd_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x999e8297, "vfree" },
	{ 0x37169bb4, "mtd_read" },
	{ 0x9b4f6661, "kmsg_dump_register" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf08947b2, "mtd_block_markbad" },
	{ 0xff29dadd, "mtd_erase" },
	{ 0xb52b78eb, "mtd_block_isbad" },
	{ 0x374c2088, "kmsg_dump_get_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5366dccf, "mtd_write" },
	{ 0xfb578fc5, "memset" },
	{ 0x18b078e4, "mtd_panic_write" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5850110, "printk" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xed814ec1, "kmsg_dump_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "BA0B0E2901BBCEF068D6E2F");
