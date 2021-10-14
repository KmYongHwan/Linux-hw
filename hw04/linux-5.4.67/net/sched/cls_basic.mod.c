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
	{ 0x56470118, "__warn_printk" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x100feef5, "tcf_em_tree_validate" },
	{ 0x49a63a34, "tcf_exts_validate" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x3aa8cb36, "__tcf_em_tree_match" },
	{ 0xf546c3ae, "tcf_action_exec" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5df081, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xd2efc819, "tcf_em_tree_destroy" },
	{ 0x1137bf58, "tcf_exts_destroy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x4cbbe857, "tcf_exts_dump_stats" },
	{ 0xf8dbe2e0, "tcf_em_tree_dump" },
	{ 0xefae97d1, "tcf_exts_dump" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4255F90CADE79F104660005");
