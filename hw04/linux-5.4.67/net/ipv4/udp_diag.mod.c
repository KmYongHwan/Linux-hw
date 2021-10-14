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
	{ 0x79eadd4, "inet_diag_unregister" },
	{ 0xd07160b2, "inet_diag_register" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x53825c19, "netlink_unicast" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x5d033d39, "__udp4_lib_lookup" },
	{ 0xc6eb389b, "sk_free" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x2e170df8, "sock_diag_destroy" },
	{ 0xf575047e, "sock_diag_check_cookie" },
	{ 0xa169ad50, "__udp6_lib_lookup" },
	{ 0x95a67b07, "udp_table" },
	{ 0xd4d1983c, "udplite_table" },
	{ 0xd74f4735, "inet_sk_diag_fill" },
	{ 0x8d122346, "inet_diag_bc_sk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x24539092, "netlink_net_capable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "CBCB2C4EEA3B4E509A5A91C");
