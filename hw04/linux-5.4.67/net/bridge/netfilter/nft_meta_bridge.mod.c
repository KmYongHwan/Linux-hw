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
	{ 0x5170e7f3, "nft_meta_policy" },
	{ 0xf4e21d1f, "nft_meta_get_dump" },
	{ 0x18db4bf4, "nft_meta_set_validate" },
	{ 0x3e9beade, "nft_meta_set_dump" },
	{ 0xe9da5879, "nft_meta_set_destroy" },
	{ 0xe1fb1c63, "nft_meta_set_init" },
	{ 0xc2a9f99c, "nft_meta_set_eval" },
	{ 0x47c27c2c, "nft_unregister_expr" },
	{ 0x5407d6bf, "nft_register_expr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb49b770, "br_vlan_get_pvid_rcu" },
	{ 0x819ce076, "nft_meta_get_eval" },
	{ 0x4055c28, "br_vlan_get_proto" },
	{ 0xca8780b, "br_vlan_enabled" },
	{ 0x9166fada, "strncpy" },
	{ 0xd89037c3, "netdev_master_upper_dev_get_rcu" },
	{ 0x7996470c, "nft_meta_get_init" },
	{ 0x8c404812, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,bridge");


MODULE_INFO(srcversion, "F61D317F57AF807E1DA077A");
