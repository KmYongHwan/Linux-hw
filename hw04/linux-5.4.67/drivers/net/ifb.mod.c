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
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0xce807a25, "up_write" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x4db66e2f, "__rtnl_link_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x4ec676d3, "__rtnl_link_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x57bc19d2, "down_write" },
	{ 0x565f18, "pernet_ops_rwsem" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x61cfa3f3, "skb_pull_rcsum" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x91b9215a, "dev_get_by_index_rcu" },
	{ 0x37a0cba, "kfree" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0xfe64b80a, "netif_tx_stop_all_queues" },
	{ 0x15314fce, "consume_skb" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A734F78712E8C29F996B503");
