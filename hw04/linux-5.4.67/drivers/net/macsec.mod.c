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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x71227479, "genl_unregister_family" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x1c06f459, "genl_register_family" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x789d8622, "genlmsg_put" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x1b6fcc34, "gro_cells_receive" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6c2b627a, "crypto_aead_decrypt" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xcd47e287, "crypto_aead_encrypt" },
	{ 0x46ab6112, "skb_to_sgvec" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x34c21374, "skb_cow_data" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x12950e37, "skb_copy" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x15314fce, "consume_skb" },
	{ 0xf12bcde7, "skb_copy_expand" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe0ca8433, "netdev_rx_handler_register" },
	{ 0xdb6be758, "linkwatch_fire_event" },
	{ 0x3e49bf8a, "netdev_upper_dev_link" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x90c556f7, "netif_stacked_transfer_operstate" },
	{ 0x4a8fc4ce, "dev_set_mtu" },
	{ 0xdc81e95a, "netdev_rx_handler_unregister" },
	{ 0x988a6c9b, "netdev_upper_dev_unlink" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a4497db, "kzfree" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x4bfaea9a, "gro_cells_init" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x9fda7d7c, "dev_uc_unsync" },
	{ 0xf29362f6, "dev_mc_unsync" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x7e9023a4, "dev_set_promiscuity" },
	{ 0x438e7aae, "dev_set_allmulti" },
	{ 0xc8c728b1, "dev_uc_sync" },
	{ 0x579db938, "dev_mc_sync" },
	{ 0x31338857, "dev_uc_del" },
	{ 0x3c5f6a30, "dev_uc_add" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x8ddcee7d, "___pskb_trim" },
	{ 0xb18156be, "skb_pull" },
	{ 0xb0e602eb, "memmove" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x95195e25, "crypto_aead_setauthsize" },
	{ 0x5a9ed457, "crypto_aead_setkey" },
	{ 0x63344450, "crypto_alloc_aead" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x819cae46, "__dev_get_by_index" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B5353DBF6269F951C91CF65");
