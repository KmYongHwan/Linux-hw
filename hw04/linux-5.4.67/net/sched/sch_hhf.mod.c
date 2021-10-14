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
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x5d4f344, "qdisc_tree_reduce_backlog" },
	{ 0xfa6c70d4, "skb_get_hash_perturb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x1c792212, "rtnl_kfree_skbs" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x79afc647, "gnet_stats_copy_app" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "69535CB60D413E3A36D7030");
