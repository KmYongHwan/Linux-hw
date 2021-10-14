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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9067bfb2, "vb2_plane_cookie" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x5f3658ce, "v4l2_event_queue" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xba312d7b, "current_task" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x815588a6, "clk_enable" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x11d491c0, "vb2_queue_release" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-common,videodev,videobuf2-v4l2");

MODULE_ALIAS("of:N*T*Caspeed,ast2400-video-engine");
MODULE_ALIAS("of:N*T*Caspeed,ast2400-video-engineC*");
MODULE_ALIAS("of:N*T*Caspeed,ast2500-video-engine");
MODULE_ALIAS("of:N*T*Caspeed,ast2500-video-engineC*");

MODULE_INFO(srcversion, "9B82367C63B7FB226321643");
