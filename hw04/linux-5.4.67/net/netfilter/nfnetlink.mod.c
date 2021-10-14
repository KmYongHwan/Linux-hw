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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x1741fd40, "netlink_has_listeners" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x17b08f9f, "nlmsg_notify" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x688bd4df, "netlink_kernel_release" },
	{ 0x7637553c, "netlink_rcv_skb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x53825c19, "netlink_unicast" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb18156be, "skb_pull" },
	{ 0xf720a60b, "module_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x876027a, "netlink_ack" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xd6f4a670, "netlink_set_err" },
	{ 0xa469a2d, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x24539092, "netlink_net_capable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FC2F4E6FF4F119646413F12");
