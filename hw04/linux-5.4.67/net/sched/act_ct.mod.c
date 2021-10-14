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
	{ 0x5e7600f8, "tcf_unregister_action" },
	{ 0x91d2edfd, "tcf_register_action" },
	{ 0xb9911f2a, "nf_ct_delete" },
	{ 0x9502c57e, "__nf_conntrack_confirm" },
	{ 0xa63fbd3, "nf_ct_nat_ext_add" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x95a9d784, "pskb_trim_rcsum_slow" },
	{ 0x56f596ba, "nf_connlabels_replace" },
	{ 0x7ade4caf, "nf_ct_deliver_cached_events" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2d1a1a5a, "ip_defrag" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x98d30d9f, "nf_ct_frag6_gather" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x9b128b31, "ipv6_find_hdr" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xfae8b150, "nf_conntrack_in" },
	{ 0x61cfa3f3, "skb_pull_rcsum" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xc6cb057f, "nf_nat_icmpv6_reply_translation" },
	{ 0xace2f5bb, "ipv6_skip_exthdr" },
	{ 0x2cc4232f, "nf_nat_setup_info" },
	{ 0xa38d710d, "nf_nat_icmp_reply_translation" },
	{ 0x2abe3803, "nf_nat_packet" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x9bb8314a, "nf_nat_alloc_null_binding" },
	{ 0x8e7681e6, "tcf_idr_insert" },
	{ 0x54fcfcf0, "nf_ct_tmpl_alloc" },
	{ 0x1fa7d8ef, "__tcf_idr_release" },
	{ 0xafb160cd, "tcf_idr_cleanup" },
	{ 0xcf73736b, "tcf_idr_create" },
	{ 0x10dd7f6d, "tcf_chain_put_by_act" },
	{ 0x27842940, "tcf_action_set_ctrlact" },
	{ 0xac9fda7, "tcf_action_check_ctrlact" },
	{ 0x27a1ece4, "tcf_idr_check_alloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xc5850110, "printk" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf75cefde, "nf_connlabels_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xfb578fc5, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x599e08a0, "tcf_idr_search" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xf95d45e9, "tcf_generic_walker" },
	{ 0x37a0cba, "kfree" },
	{ 0xc8fab62b, "tcf_idrinfo_destroy" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xffadf1bd, "nf_connlabels_put" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_nat,nf_defrag_ipv6");


MODULE_INFO(srcversion, "3B60985C3AB2CB66EC40A30");
