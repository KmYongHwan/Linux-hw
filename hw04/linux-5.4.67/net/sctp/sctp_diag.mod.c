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
	{ 0x66e9f04d, "release_sock" },
	{ 0x567dea51, "sctp_transport_lookup_process" },
	{ 0x79eadd4, "inet_diag_unregister" },
	{ 0xc091aa13, "inet_diag_msg_attrs_fill" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x53825c19, "netlink_unicast" },
	{ 0x9ed8133a, "nla_reserve_64bit" },
	{ 0xc66131fe, "inet_diag_msg_common_fill" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4bcb9e7b, "sctp_for_each_transport" },
	{ 0xf575047e, "sock_diag_check_cookie" },
	{ 0x33713d5b, "sock_diag_save_cookie" },
	{ 0x8e281574, "nla_reserve" },
	{ 0xd07160b2, "inet_diag_register" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0x7ae527ee, "sctp_get_sctp_info" },
	{ 0xd6556aa8, "sctp_for_each_endpoint" },
	{ 0x24539092, "netlink_net_capable" },
};

MODULE_INFO(depends, "sctp,inet_diag");


MODULE_INFO(srcversion, "E77C0C19E2DB0D042E35317");
