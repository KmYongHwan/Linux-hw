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
	{ 0x1f7b1d11, "tcf_block_get" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xf2eb1783, "gnet_stats_copy_queue" },
	{ 0x56470118, "__warn_printk" },
	{ 0x79afc647, "gnet_stats_copy_app" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x12ea5cd2, "__skb_get_hash" },
	{ 0x5d4f344, "qdisc_tree_reduce_backlog" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdb535600, "tcf_classify" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xfb578fc5, "memset" },
	{ 0x1c792212, "rtnl_kfree_skbs" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf01b4e49, "tcf_block_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1ED0424B9461B3B41EF4A0A");
