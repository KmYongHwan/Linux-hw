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
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x5df081, "__put_net" },
	{ 0xd5dff0b1, "rtnl_configure_link" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0xbcfe0f, "rtnl_create_link" },
	{ 0xb4c0ab70, "rtnl_link_get_net" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xe1e7e40c, "rtnl_nla_parse_ifla" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0x15314fce, "consume_skb" },
	{ 0x2825d345, "sock_efree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A028E50363AB9B8F6FCDF94");
