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
	{ 0xab5b8a7a, "nf_ct_unexpect_related" },
	{ 0x8459779, "nf_conntrack_helper_register" },
	{ 0x807e2a15, "nf_ct_gre_keymap_add" },
	{ 0x4ee1317a, "nf_conntrack_helper_unregister" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xcc9a0d0e, "nf_ct_expect_init" },
	{ 0xb9911f2a, "nf_ct_delete" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0xe3971d53, "nf_ct_expect_find_get" },
	{ 0xa03d3a7b, "nf_ct_expect_put" },
	{ 0xcb8d8014, "nf_ct_expect_alloc" },
	{ 0x9f38e93b, "nf_ct_expect_related_report" },
	{ 0x10580197, "nf_ct_gre_keymap_destroy" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x1777f00d, "nf_conntrack_find_get" },
	{ 0x561f2fa3, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "AEED208630413F2054480D8");
