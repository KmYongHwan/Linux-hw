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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0x56470118, "__warn_printk" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xbc376b57, "skb_unlink" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x47dee78, "skb_dequeue_tail" },
	{ 0xfb578fc5, "memset" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9c160d9e, "skb_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B3F119D70FB75A37C52A13E");
