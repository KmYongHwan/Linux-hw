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
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xf9eb813f, "ntb_transport_unregister_client_dev" },
	{ 0x5423bb17, "ntb_transport_unregister_client" },
	{ 0xd62b623a, "ntb_transport_register_client" },
	{ 0xf55d6313, "ntb_transport_register_client_dev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3d54dbfc, "ntb_transport_tx_enqueue" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x32537aca, "ntb_transport_link_query" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x43075c75, "ntb_transport_create_queue" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x862001f, "ntb_transport_tx_free_entry" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9c992c8f, "ntb_transport_link_up" },
	{ 0xc37d9036, "ntb_transport_rx_remove" },
	{ 0x436098aa, "ntb_transport_link_down" },
	{ 0x30934216, "ntb_transport_max_size" },
	{ 0x5792f848, "strlcpy" },
	{ 0x15314fce, "consume_skb" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xd40e7a02, "ntb_transport_rx_enqueue" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc270dc24, "ntb_transport_free_queue" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb_transport");


MODULE_INFO(srcversion, "E1DAA000CD010218C1477DA");
