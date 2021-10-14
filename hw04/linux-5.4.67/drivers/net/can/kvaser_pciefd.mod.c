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
	{ 0x601aeedc, "can_change_mtu" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xd8b09a7d, "can_put_echo_skb" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0xcb3f70cb, "register_candev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xf006d007, "alloc_candev_mqs" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xb21aa7bc, "dmam_alloc_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4df02057, "crc32_be" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x34d75208, "can_change_state" },
	{ 0x2b4b5e45, "alloc_can_skb" },
	{ 0xf3e771b0, "can_get_echo_skb" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x29361773, "complete" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0x1498124e, "alloc_canfd_skb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x21243b85, "alloc_can_err_skb" },
	{ 0xe3b8b26d, "can_bus_off" },
	{ 0x127bd30c, "open_candev" },
	{ 0x8eb937e0, "close_candev" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x51bd55b5, "completion_done" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x90b8d10f, "pci_clear_master" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf2acf242, "free_candev" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4013106f, "unregister_candev" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("pci:v00001A07d0000000Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A07d0000000Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A07d0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A07d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A07d00000011sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "307CE7734B8A5C0DEC31B2F");
