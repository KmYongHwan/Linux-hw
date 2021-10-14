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
	{ 0x8957eb39, "nf_ct_helper_expectfn_register" },
	{ 0xfd21d166, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xfd53e6b, "nf_ct_helper_expectfn_unregister" },
	{ 0xc103de86, "nf_nat_sip_hooks" },
	{ 0x78a07356, "nf_nat_helper_unregister" },
	{ 0x9a5e7275, "skb_ensure_writable" },
	{ 0xa4eff1de, "ct_sip_parse_numerical_param" },
	{ 0xb0624132, "ct_sip_parse_request" },
	{ 0xb0003e2e, "ct_sip_parse_address_param" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x8da9b6d6, "ct_sip_parse_header_uri" },
	{ 0x5da181d1, "nf_ct_seqadj_set" },
	{ 0x1685288e, "nf_ct_helper_log" },
	{ 0xab5b8a7a, "nf_ct_unexpect_related" },
	{ 0x9f38e93b, "nf_ct_expect_related_report" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa944e08f, "ct_sip_get_header" },
	{ 0x31e803d0, "ct_sip_get_sdp_header" },
	{ 0x286f89ba, "__nf_nat_mangle_tcp_packet" },
	{ 0xf50a70c9, "nf_nat_mangle_udp_packet" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x2cc4232f, "nf_nat_setup_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_sip,nf_nat");


MODULE_INFO(srcversion, "C9C4A1ED825419B5DDFB7AE");
