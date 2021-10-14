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
	{ 0xe363936e, "tcf_em_unregister" },
	{ 0x93c90d97, "tcf_em_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x91b9215a, "dev_get_by_index_rcu" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xecc6ec8b, "ip_set_test" },
	{ 0xb18156be, "skb_pull" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x74021473, "ip_set_nfnl_get_byindex" },
	{ 0x37a0cba, "kfree" },
	{ 0x94a98705, "ip_set_nfnl_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "2FFEEF47248D946AED3F588");
