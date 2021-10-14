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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xac14880c, "dvb_module_probe" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x7e56b741, "dvb_unregister_adapter" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x3c2b291b, "dvb_register_frontend" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x4db52a6e, "dvb_unregister_frontend" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xba312d7b, "current_task" },
	{ 0x678ab8bd, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x1312f9ff, "dvb_frontend_reinitialise" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xacf1c9a7, "dvb_module_release" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x562bf022, "dvb_register_adapter" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xd03eaf4c, "schedule_hrtimeout_range" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xca7d8764, "kthread_freezable_should_stop" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xb3927325, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("pci:v000010EEd0000211Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd0000222Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1250B09383124A794F04AED");
