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
	{ 0xf1a2f63d, "unregister_qdisc" },
	{ 0x5f9acab2, "register_qdisc" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x6d665949, "qdisc_watchdog_schedule_ns" },
	{ 0xc634ca7, "kfree_skb_list" },
	{ 0x7c083e8, "skb_checksum_help" },
	{ 0x12950e37, "skb_copy" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x15314fce, "consume_skb" },
	{ 0xb0c22846, "__skb_gso_segment" },
	{ 0x12e1c787, "netif_skb_features" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x5d4f344, "qdisc_tree_reduce_backlog" },
	{ 0x9417d3fc, "__qdisc_calculate_pkt_len" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x2006ca6b, "skb_orphan_partial" },
	{ 0xf49632b3, "qdisc_watchdog_init" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x131ecf3a, "qdisc_reset" },
	{ 0x1c792212, "rtnl_kfree_skbs" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0x24478ec1, "qdisc_put" },
	{ 0xd84fc956, "qdisc_watchdog_cancel" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0A89537B3FCE8134F3DE4E9");
