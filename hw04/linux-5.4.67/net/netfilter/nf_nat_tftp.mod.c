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
	{ 0xfd21d166, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2fc1052c, "nf_nat_tftp_hook" },
	{ 0x78a07356, "nf_nat_helper_unregister" },
	{ 0x1685288e, "nf_ct_helper_log" },
	{ 0x9f38e93b, "nf_ct_expect_related_report" },
	{ 0x28ab51d2, "nf_nat_follow_master" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_tftp,nf_nat");


MODULE_INFO(srcversion, "91802A9EAAF9EA64CDC6C90");
