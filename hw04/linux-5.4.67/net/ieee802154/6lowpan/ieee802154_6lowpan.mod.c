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
	{ 0xe31c4d93, "neigh_lookup" },
	{ 0x2f1ca700, "inet_frag_kill" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xa8b80792, "dst_release" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x12950e37, "skb_copy" },
	{ 0xe8d10c9, "lowpan_header_compress" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0x37dde473, "neigh_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x77c46da7, "fqdir_exit" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x10d6aee3, "inet_frag_find" },
	{ 0xbdae6aeb, "inet_frag_reasm_prepare" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0x495e0751, "inet_frags_fini" },
	{ 0xf682fb8c, "ieee802154_hdr_peek" },
	{ 0xf6523542, "dev_get_by_index" },
	{ 0x12bc2eb, "dev_remove_pack" },
	{ 0xa60ebde7, "nd_tbl" },
	{ 0xb18156be, "skb_pull" },
	{ 0x3785c132, "init_net" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x442e46f9, "lowpan_header_decompress" },
	{ 0x65782ce7, "fqdir_init" },
	{ 0xf12bcde7, "skb_copy_expand" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x2d2b05f8, "inet_frag_reasm_finish" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x3d3ef5b7, "inet_frag_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecdea588, "lowpan_unregister_netdevice" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1cd2555a, "ieee802154_hdr_peek_addrs" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x5a9cbc00, "lowpan_register_netdevice" },
	{ 0xc395c2f1, "inet_frags_init" },
	{ 0x8068dfc9, "inet_frag_queue_insert" },
	{ 0x6b95e068, "dev_add_pack" },
	{ 0x15314fce, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x9111d3b6, "register_net_sysctl" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x87e2553b, "ieee802154_max_payload" },
};

MODULE_INFO(depends, "6lowpan,ieee802154");


MODULE_INFO(srcversion, "CA07D658CDB046FA03041C1");
