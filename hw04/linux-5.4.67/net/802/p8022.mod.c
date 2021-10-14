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
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xea37be37, "llc_sap_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x301dcc29, "llc_sap_close" },
	{ 0xef41ad51, "llc_build_and_send_ui_pkt" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "D2B2B9158867C779612F86E");
