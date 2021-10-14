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
	{ 0xb398858, "xt_unregister_targets" },
	{ 0x1b0c3141, "xt_register_targets" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd1f2eee2, "nf_logger_find_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70845325, "nf_log_packet" },
	{ 0xb8cd3a7f, "nf_logger_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "5C90E9D7C2E13C37F869886");
