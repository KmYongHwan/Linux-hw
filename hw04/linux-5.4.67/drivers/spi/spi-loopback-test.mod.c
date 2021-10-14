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
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xcba4abe3, "list_sort" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0x77179d2e, "param_ops_string" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x85b7373, "spi_sync" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Clinux,spi-loopback-test");
MODULE_ALIAS("of:N*T*Clinux,spi-loopback-testC*");

MODULE_INFO(srcversion, "3ECFB2C50E872EDB087E56A");
