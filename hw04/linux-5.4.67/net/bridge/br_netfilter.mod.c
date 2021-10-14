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
	{ 0x95a9d784, "pskb_trim_rcsum_slow" },
	{ 0x7c929828, "skb_ext_add" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x4831dc5a, "ip_do_fragment" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xa8b80792, "dst_release" },
	{ 0x5b091fc0, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x37dde473, "neigh_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xf591753d, "nf_hooks_needed" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x46a8862b, "nf_hook_slow" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0xe8bc4666, "br_dev_queue_push_xmit" },
	{ 0xc5850110, "printk" },
	{ 0x9674f8f8, "nf_unregister_net_hooks" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xb18156be, "skb_pull" },
	{ 0x3785c132, "init_net" },
	{ 0x2d720173, "br_forward_finish" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xb1d6053b, "ip_route_input_noref" },
	{ 0x7fce59b0, "nf_ipv6_ops" },
	{ 0x5fb4da0a, "nf_register_net_hooks" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x61cfa3f3, "skb_pull_rcsum" },
	{ 0xbb038948, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0x74f90f5e, "nf_br_ops" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x31745b26, "__skb_ext_del" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe404696a, "br_handle_frame_finish" },
	{ 0x9111d3b6, "register_net_sysctl" },
};

MODULE_INFO(depends, "bridge");


MODULE_INFO(srcversion, "5C863D021D075D6531920BA");
