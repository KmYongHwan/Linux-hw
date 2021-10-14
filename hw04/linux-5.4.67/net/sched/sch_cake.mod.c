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
	{ 0xb0c22846, "__skb_gso_segment" },
	{ 0x12e1c787, "netif_skb_features" },
	{ 0x15314fce, "consume_skb" },
	{ 0xdb535600, "tcf_classify" },
	{ 0x6d665949, "qdisc_watchdog_schedule_ns" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x5d4f344, "qdisc_tree_reduce_backlog" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf2eb1783, "gnet_stats_copy_queue" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x1f7b1d11, "tcf_block_get" },
	{ 0xf49632b3, "qdisc_watchdog_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x9b600e87, "nf_ct_get_tuple_skb" },
	{ 0xafa375ab, "flow_hash_from_keys" },
	{ 0xccd77df3, "__skb_flow_dissect" },
	{ 0xc025016c, "flow_keys_dissector" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf01b4e49, "tcf_block_put" },
	{ 0xd84fc956, "qdisc_watchdog_cancel" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "904AA1FB994227DF052D92A");
