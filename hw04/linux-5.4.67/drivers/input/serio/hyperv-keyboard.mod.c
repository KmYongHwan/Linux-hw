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
	{ 0xb27f114a, "vmbus_driver_unregister" },
	{ 0x375aff77, "__vmbus_driver_register" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x30c0c597, "__serio_register_port" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x5ecdac6f, "vmbus_sendpacket" },
	{ 0xbba70f96, "vmbus_open" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xcd01428b, "hv_pkt_iter_close" },
	{ 0xa9dcba35, "pm_wakeup_dev_event" },
	{ 0x816b3ac4, "serio_interrupt" },
	{ 0xdd8e542e, "__hv_pkt_iter_next" },
	{ 0x29361773, "complete" },
	{ 0xb7cbe876, "hv_pkt_iter_first" },
	{ 0x37a0cba, "kfree" },
	{ 0x1689a306, "vmbus_close" },
	{ 0xaa13729, "serio_unregister_port" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hv_vmbus");

MODULE_ALIAS("vmbus:6dad12f9172bea48bd65f927a61c7684");

MODULE_INFO(srcversion, "8BF8F161BB9831DCE892510");
