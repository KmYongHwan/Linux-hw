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
	{ 0xa7759ac3, "inet6_del_offload" },
	{ 0x73b1a36a, "xfrm_unregister_type_offload" },
	{ 0x6526e2, "inet6_add_offload" },
	{ 0xc5850110, "printk" },
	{ 0x5fec6550, "xfrm_register_type_offload" },
	{ 0x167ad61b, "xfrm_input" },
	{ 0x8e377f9e, "xfrm_state_lookup" },
	{ 0x9d7ee6d9, "secpath_set" },
	{ 0xb6077ea3, "xfrm_parse_spi" },
	{ 0x31745b26, "__skb_ext_del" },
	{ 0x87cb9193, "esp6_output_tail" },
	{ 0x903ba40f, "esp6_output_head" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8e4c8f52, "inet6_offloads" },
	{ 0x9828abda, "skb_mac_gso_segment" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xace2f5bb, "ipv6_skip_exthdr" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xf966423e, "esp6_input_done2" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "esp6");


MODULE_INFO(srcversion, "1CE2BCF3A0AF489A290E1A5");
