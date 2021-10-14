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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xdfc42126, "nf_nat_pptp_hook_expectfn" },
	{ 0x890242d6, "nf_nat_pptp_hook_exp_gre" },
	{ 0x34d3bffe, "nf_nat_pptp_hook_inbound" },
	{ 0x109c8381, "nf_nat_pptp_hook_outbound" },
	{ 0xf2a36612, "pptp_msg_name" },
	{ 0x286f89ba, "__nf_nat_mangle_tcp_packet" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2cc4232f, "nf_nat_setup_info" },
	{ 0xa03d3a7b, "nf_ct_expect_put" },
	{ 0xab5b8a7a, "nf_ct_unexpect_related" },
	{ 0xe3971d53, "nf_ct_expect_find_get" },
	{ 0xa63fbd3, "nf_ct_nat_ext_add" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack_pptp,nf_nat,nf_conntrack");


MODULE_INFO(srcversion, "7FFBF2B61F70FF1D9671451");
