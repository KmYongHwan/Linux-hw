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
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x12ea5cd2, "__skb_get_hash" },
	{ 0xccd77df3, "__skb_flow_dissect" },
	{ 0xc025016c, "flow_keys_dissector" },
	{ 0x2210d332, "from_kuid" },
	{ 0x3aa8cb36, "__tcf_em_tree_match" },
	{ 0xbc3bdc7f, "flow_get_u32_src" },
	{ 0xd4432990, "from_kgid" },
	{ 0xf546c3ae, "tcf_action_exec" },
	{ 0x8516c14a, "flow_get_u32_dst" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x17d89551, "tcf_block_netif_keep_dst" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0x49a63a34, "tcf_exts_validate" },
	{ 0x100feef5, "tcf_em_tree_validate" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x4cbbe857, "tcf_exts_dump_stats" },
	{ 0xf8dbe2e0, "tcf_em_tree_dump" },
	{ 0xefae97d1, "tcf_exts_dump" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5df081, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xd2efc819, "tcf_em_tree_destroy" },
	{ 0x1137bf58, "tcf_exts_destroy" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "354D21925A7B10C95156D7F");
