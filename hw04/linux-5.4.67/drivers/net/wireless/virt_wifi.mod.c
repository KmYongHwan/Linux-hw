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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x1b098acb, "wiphy_register" },
	{ 0x86f7f0be, "wiphy_new_nm" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x93e6e765, "wiphy_free" },
	{ 0xc698a562, "wiphy_unregister" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf720a60b, "module_put" },
	{ 0x988a6c9b, "netdev_upper_dev_unlink" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xdc81e95a, "netdev_rx_handler_unregister" },
	{ 0x9415ca79, "__module_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3e49bf8a, "netdev_upper_dev_link" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x90c556f7, "netif_stacked_transfer_operstate" },
	{ 0xe0ca8433, "netdev_rx_handler_register" },
	{ 0x819cae46, "__dev_get_by_index" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x15314fce, "consume_skb" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x68828cc7, "cfg80211_disconnected" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x25cfb8d4, "cfg80211_connect_done" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xc223db15, "cfg80211_scan_done" },
	{ 0xd6cfed90, "cfg80211_put_bss" },
	{ 0xdc628a0b, "cfg80211_inform_bss_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "CB287642FF1C6AC583FEE08");
