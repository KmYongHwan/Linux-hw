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
	{ 0xdf9c39b8, "dsa_tag_drivers_unregister" },
	{ 0x4e77c2da, "dsa_tag_drivers_register" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xb0e602eb, "memmove" },
	{ 0x61cfa3f3, "skb_pull_rcsum" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core");


MODULE_INFO(srcversion, "AA0D51FDC2C490777C10574");
