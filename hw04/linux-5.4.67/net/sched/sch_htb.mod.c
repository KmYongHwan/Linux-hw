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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xf1a2f63d, "unregister_qdisc" },
	{ 0x5f9acab2, "register_qdisc" },
	{ 0x9417d3fc, "__qdisc_calculate_pkt_len" },
	{ 0xdb535600, "tcf_classify" },
	{ 0xee5e11dd, "qdisc_hash_add" },
	{ 0xc4212ab9, "qdisc_class_hash_insert" },
	{ 0xbac58131, "gen_new_estimator" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xd042475c, "qdisc_get_rtab" },
	{ 0xb146a2ca, "qdisc_class_hash_grow" },
	{ 0xb2cb334, "psched_ratecfg_precompute" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x37a1909f, "gen_replace_estimator" },
	{ 0xc5850110, "printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe3a9b9de, "qdisc_warn_nonwc" },
	{ 0x6d665949, "qdisc_watchdog_schedule_ns" },
	{ 0xece784c2, "rb_first" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf78e4447, "noop_qdisc" },
	{ 0x91a7b1da, "qdisc_class_hash_remove" },
	{ 0x913f24ed, "qdisc_create_dflt" },
	{ 0x178b85fa, "pfifo_qdisc_ops" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x5d4f344, "qdisc_tree_reduce_backlog" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x79afc647, "gnet_stats_copy_app" },
	{ 0xf2eb1783, "gnet_stats_copy_queue" },
	{ 0x642b26f0, "gnet_stats_copy_rate_est" },
	{ 0xaad0e6be, "gnet_stats_copy_basic" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xf53d4c26, "qdisc_class_hash_destroy" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x117093be, "qdisc_class_hash_init" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x1f7b1d11, "tcf_block_get" },
	{ 0xf49632b3, "qdisc_watchdog_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1c792212, "rtnl_kfree_skbs" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xd84fc956, "qdisc_watchdog_cancel" },
	{ 0x131ecf3a, "qdisc_reset" },
	{ 0x37a0cba, "kfree" },
	{ 0xf01b4e49, "tcf_block_put" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0x24478ec1, "qdisc_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xca9360b5, "rb_next" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xfcb42fc, "__netif_schedule" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1B93A428CA6D03CDE9F4471");
