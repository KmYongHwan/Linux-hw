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
	{ 0x47c27c2c, "nft_unregister_expr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5407d6bf, "nft_register_expr" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe0c52959, "flow_offload_free" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xa8b80792, "dst_release" },
	{ 0x939326e2, "flow_offload_add" },
	{ 0x7a355c27, "flow_offload_alloc" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0xac06b442, "nf_flow_table_cleanup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xac7c2b8a, "nf_route" },
	{ 0xe85e7763, "nf_ct_netns_get" },
	{ 0xa46f6f16, "nft_flowtable_lookup" },
	{ 0xc69ca6bc, "nf_tables_deactivate_flowtable" },
	{ 0xa615716f, "nf_ct_netns_put" },
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_flow_table,nf_conntrack");


MODULE_INFO(srcversion, "153807335C2B8AEAAA83802");
