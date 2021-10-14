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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5f9acab2, "register_qdisc" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xf49632b3, "qdisc_watchdog_init" },
	{ 0xee5e11dd, "qdisc_hash_add" },
	{ 0x24478ec1, "qdisc_put" },
	{ 0xd84fc956, "qdisc_watchdog_cancel" },
	{ 0xf78e4447, "noop_qdisc" },
	{ 0x913f24ed, "qdisc_create_dflt" },
	{ 0x178b85fa, "pfifo_qdisc_ops" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x5d4f344, "qdisc_tree_reduce_backlog" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1c792212, "rtnl_kfree_skbs" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x6d665949, "qdisc_watchdog_schedule_ns" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xc5850110, "printk" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x78b3951c, "__ethtool_get_link_ksettings" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D70CDB2840837F6A28C2546");
