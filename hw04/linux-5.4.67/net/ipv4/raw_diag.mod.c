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
	{ 0xc6eb389b, "sk_free" },
	{ 0x2e170df8, "sock_diag_destroy" },
	{ 0xd74f4735, "inet_sk_diag_fill" },
	{ 0x8d122346, "inet_diag_bc_sk" },
	{ 0x24539092, "netlink_net_capable" },
	{ 0xb510c250, "raw_v4_hashinfo" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x5d2e6b92, "__raw_v4_lookup" },
	{ 0x837ff51, "__raw_v6_lookup" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xed7c7b91, "raw_v6_hashinfo" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "4E5A931CEBE4664E5012A22");
