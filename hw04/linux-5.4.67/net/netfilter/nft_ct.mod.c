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
	{ 0x8d181256, "nft_unregister_obj" },
	{ 0xcde1c80e, "nft_register_obj" },
	{ 0x5407d6bf, "nft_register_expr" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xabc8c0fc, "nf_ct_l4proto_find" },
	{ 0x56f596ba, "nf_connlabels_replace" },
	{ 0x754d539c, "strlen" },
	{ 0x3785c132, "init_net" },
	{ 0xffadf1bd, "nf_connlabels_put" },
	{ 0xf75cefde, "nf_connlabels_get" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0x10aff5c, "nf_ct_get_id" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9166fada, "strncpy" },
	{ 0x8c404812, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x54fcfcf0, "nf_ct_tmpl_alloc" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xb9d51026, "nft_dump_register" },
	{ 0x627747cc, "nf_conntrack_helper_try_module_get" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xe7c8b3fc, "nf_conntrack_helper_put" },
	{ 0x9f38e93b, "nf_ct_expect_related_report" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcc9a0d0e, "nf_ct_expect_init" },
	{ 0xcb8d8014, "nf_ct_expect_alloc" },
	{ 0x15e1426f, "nf_ct_helper_ext_add" },
	{ 0x5465cea, "__nf_ct_refresh_acct" },
	{ 0x561f2fa3, "nf_ct_ext_add" },
	{ 0xe85e7763, "nf_ct_netns_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x80c58651, "nf_ct_untimeout" },
	{ 0xa615716f, "nf_ct_netns_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack");


MODULE_INFO(srcversion, "EDC5A93AFD8791A3F734317");
