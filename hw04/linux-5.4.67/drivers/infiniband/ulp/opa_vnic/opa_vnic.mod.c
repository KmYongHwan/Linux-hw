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
	{ 0xf3744f5f, "netdev_info" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x575636cd, "ib_create_ah_from_wc" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x21b0955d, "ib_find_pkey" },
	{ 0xce13e75f, "ib_register_mad_agent" },
	{ 0xbbd6c1d4, "ib_free_recv_mad" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xdb6be758, "linkwatch_fire_event" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xfda9a24f, "ib_free_send_mad" },
	{ 0x82a0eab2, "rdma_destroy_ah_user" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xc5850110, "printk" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x12ea5cd2, "__skb_get_hash" },
	{ 0xc6bcbebb, "ib_set_client_data" },
	{ 0xca1c07c5, "ib_create_send_mad" },
	{ 0xd1295c75, "ib_post_send_mad" },
	{ 0xe9f2b767, "ib_unregister_mad_agent" },
	{ 0xad950225, "ib_register_client" },
	{ 0xb3420b1a, "ib_unregister_event_handler" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x259acc71, "ib_register_event_handler" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7dba6c73, "rdma_create_ah" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x347bff33, "eth_commit_mac_addr_change" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x8f08e886, "ib_modify_port" },
	{ 0x37a0cba, "kfree" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xa292830b, "ib_unregister_client" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x11d80dd4, "__skb_pad" },
	{ 0x4a8fc4ce, "dev_set_mtu" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "EF492556E87EA79321D9594");
