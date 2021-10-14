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
	{ 0x5a228108, "unregister_tcf_proto_ops" },
	{ 0xd87c4239, "register_tcf_proto_ops" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x49a63a34, "tcf_exts_validate" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x9415ca79, "__module_get" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xf546c3ae, "tcf_action_exec" },
	{ 0xccd77df3, "__skb_flow_dissect" },
	{ 0x998caadf, "skb_flow_dissect_ct" },
	{ 0x77c154e0, "skb_flow_dissect_tunnel_info" },
	{ 0xedbdfa5d, "skb_flow_dissect_meta" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x4cbbe857, "tcf_exts_dump_stats" },
	{ 0xefae97d1, "tcf_exts_dump" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe669ef74, "tc_setup_cb_reoffload" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x754d539c, "strlen" },
	{ 0x819cae46, "__dev_get_by_index" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0x73d7d3b1, "__dev_get_by_name" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xcc1b882a, "idr_get_next_ul" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x10b3ed29, "tc_setup_cb_call" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf720a60b, "module_put" },
	{ 0x20978fb9, "idr_find" },
	{ 0xe248de8b, "tc_cleanup_flow_action" },
	{ 0x33214044, "tc_setup_cb_add" },
	{ 0x9d358f19, "tc_setup_flow_action" },
	{ 0xa76133ed, "flow_rule_alloc" },
	{ 0x434b575f, "tcf_exts_num_actions" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xbdf1c737, "tc_setup_cb_destroy" },
	{ 0x8f801d8d, "rhashtable_destroy" },
	{ 0x5df081, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1137bf58, "tcf_exts_destroy" },
	{ 0x1e62643b, "skb_flow_dissector_init" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xfb578fc5, "memset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8A0E72308DE1E5330612030");
