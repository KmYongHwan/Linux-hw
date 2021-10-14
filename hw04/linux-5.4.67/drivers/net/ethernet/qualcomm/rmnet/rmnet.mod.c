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
	{ 0xea4c5e82, "register_netdevice" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe0ca8433, "netdev_rx_handler_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xb4019bcb, "netdev_master_upper_dev_link" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x988a6c9b, "netdev_upper_dev_unlink" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x1b6fcc34, "gro_cells_receive" },
	{ 0xb18156be, "skb_pull" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x819cae46, "__dev_get_by_index" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdc81e95a, "netdev_rx_handler_unregister" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3e49bf8a, "netdev_upper_dev_link" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0x4bfaea9a, "gro_cells_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x15314fce, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x9c160d9e, "skb_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F2DAA83052C266E601EFC94");
