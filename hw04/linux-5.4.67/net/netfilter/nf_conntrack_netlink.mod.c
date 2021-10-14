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
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x6a831952, "nfnl_ct_hook" },
	{ 0xb55ff53b, "nfnetlink_subsys_unregister" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x4257ee65, "nfnetlink_subsys_register" },
	{ 0xb29c5b0, "nf_ct_iterate_cleanup_net" },
	{ 0xe4fc48b0, "nf_conntrack_eventmask_report" },
	{ 0x24d273d1, "add_timer" },
	{ 0xef6e9a51, "__nf_ct_expect_find" },
	{ 0xb9911f2a, "nf_ct_delete" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0xdba7326b, "nf_conntrack_lock" },
	{ 0xaf0847f0, "nf_conntrack_locks" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x11882f5a, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0x5a90f304, "nfnetlink_has_listeners" },
	{ 0x6b5ae891, "nfnetlink_set_err" },
	{ 0xb9cec7fa, "nfnetlink_send" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x754d539c, "strlen" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x53825c19, "netlink_unicast" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0x4198ca95, "__do_once_done" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0xa97463c9, "__siphash_aligned" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe12ad950, "nf_conntrack_free" },
	{ 0x663a667a, "__nf_ct_try_assign_helper" },
	{ 0x90b60a83, "nf_conntrack_hash_check_insert" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x1777f00d, "nf_conntrack_find_get" },
	{ 0x561f2fa3, "nf_ct_ext_add" },
	{ 0x15e1426f, "nf_ct_helper_ext_add" },
	{ 0xa34f9f5a, "nf_conntrack_alloc" },
	{ 0x34f79a48, "nf_ct_remove_expectations" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xaf4bb62f, "nf_nat_hook" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x9f38e93b, "nf_ct_expect_related_report" },
	{ 0xee8b018a, "__nf_conntrack_helper_find" },
	{ 0xf6ec182f, "nf_ct_helper_expectfn_find_by_name" },
	{ 0xcb8d8014, "nf_ct_expect_alloc" },
	{ 0x12eea37b, "nf_ct_unlink_expect_report" },
	{ 0x8687fb12, "nf_ct_expect_iterate_net" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xe3971d53, "nf_ct_expect_find_get" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xfc2b0861, "__netlink_dump_start" },
	{ 0xc5850110, "printk" },
	{ 0x4e468f45, "nf_ct_expect_register_notifier" },
	{ 0xf5c72601, "nf_conntrack_register_notifier" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe98a6d0b, "nf_conntrack_unregister_notifier" },
	{ 0xabc03b0f, "nf_ct_expect_unregister_notifier" },
	{ 0x2a2fa260, "nla_policy_len" },
	{ 0x10aff5c, "nf_ct_get_id" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x56f596ba, "nf_connlabels_replace" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xabc8c0fc, "nf_ct_l4proto_find" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xa03d3a7b, "nf_ct_expect_put" },
	{ 0xfa4234c8, "nf_ct_tcp_seqadj_set" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "CB3D1158BE9FBE64CAD84D7");
