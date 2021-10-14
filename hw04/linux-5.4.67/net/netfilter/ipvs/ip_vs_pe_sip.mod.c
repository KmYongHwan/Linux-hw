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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6fad4f8c, "unregister_ip_vs_pe" },
	{ 0x7183223d, "register_ip_vs_pe" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa944e08f, "ct_sip_get_header" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9b128b31, "ipv6_find_hdr" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x9a34e3c9, "ip_vs_new_conn_out" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_vs,nf_conntrack_sip");


MODULE_INFO(srcversion, "C9C76B0127BA9FB1A4B93EC");
