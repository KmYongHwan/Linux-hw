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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xaf4bb62f, "nf_nat_hook" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0x9dd7fe6e, "nf_ct_kill_acct" },
	{ 0xa8b80792, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2124474, "ip_send_check" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x99678a4b, "inet_proto_csum_replace4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf75ad9ad, "__skb_checksum" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb15b4109, "crc32c" },
	{ 0x5df081, "__put_net" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa1d91f67, "inet_proto_csum_replace16" },
	{ 0xe1459530, "nf_ct_iterate_destroy" },
	{ 0x11cd0f2b, "nf_ip_checksum" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xa1027c17, "skb_checksum" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x69364662, "inet_select_addr" },
	{ 0x9674f8f8, "nf_unregister_net_hooks" },
	{ 0x9a5e7275, "skb_ensure_writable" },
	{ 0xcb55a312, "nf_hook_entries_delete_raw" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa8f702fe, "ip_route_me_harder" },
	{ 0x1c15ac15, "nf_conntrack_alter_reply" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xae91f9fb, "ipv6_dev_get_saddr" },
	{ 0xf720a60b, "module_put" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x5fb4da0a, "nf_register_net_hooks" },
	{ 0xace2f5bb, "ipv6_skip_exthdr" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb29c5b0, "nf_ct_iterate_cleanup_net" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x48fddb97, "nf_conntrack_tuple_taken" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xb5bad65b, "ip6_route_me_harder" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5ab6c8e, "nf_ct_extend_unregister" },
	{ 0x8957eb39, "nf_ct_helper_expectfn_register" },
	{ 0xade21bc2, "nf_ct_extend_register" },
	{ 0xef54d67f, "__xfrm_decode_session" },
	{ 0xfd53e6b, "nf_ct_helper_expectfn_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x5da181d1, "nf_ct_seqadj_set" },
	{ 0x112dfe9e, "xfrm_lookup" },
	{ 0x53a739d1, "nf_hook_entries_insert_raw" },
	{ 0x42d32240, "nf_ip6_checksum" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x4198ca95, "__do_once_done" },
	{ 0x561f2fa3, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack,libcrc32c");


MODULE_INFO(srcversion, "FAC9547A490A538B7BB7460");
