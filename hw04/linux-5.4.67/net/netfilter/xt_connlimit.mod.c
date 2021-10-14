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
	{ 0x338e80d9, "xt_unregister_match" },
	{ 0x52ca942, "xt_register_match" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xc669eeef, "nf_ct_get_tuplepr" },
	{ 0xb7053e05, "nf_conncount_count" },
	{ 0x3df9bf22, "nf_conncount_init" },
	{ 0xb0c6b2d2, "nf_conncount_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack,nf_conncount");


MODULE_INFO(srcversion, "082CC08E7A2A01CD7294A48");
